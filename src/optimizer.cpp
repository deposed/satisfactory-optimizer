#include "ResourceName.hpp"
#include "RecipeName.hpp"
#include "RecipeDefinition.hpp"

#include "ortools/linear_solver/linear_solver.h"

#include <algorithm>
#include <functional>
#include <iostream>
#include <sstream>
#include <locale>
#include <stdio.h>
#include <utility>

using namespace std;
using namespace operations_research;

typedef struct {
	float recipes[RECIPE_SIZE] = {0};
	float resources[RESOURCE_SIZE] = {0};
	float value = 0;
} solution;

string toString(const solution& sol)
{
	stringstream ss;
	ss.imbue(locale(""));
	ss << setprecision(3) << fixed;
	ss << "recipe usage (buildings):" << endl;
	for(size_t index = 0; index < RECIPE_SIZE; ++index)
	{
		if( sol.recipes[index] > 0.1 )
		{
			ss << "  " << recipeToString(index) << ": " << sol.recipes[index] << endl;
		}
	}

	ss << "resources sunk (per min):" << endl;
	for(size_t index = 0; index < RESOURCE_SIZE; ++index)
	{
		if( sol.resources[index] > 0.1 )
		{
			ss << "  " << resourceToString(index) << ": " << sol.resources[index] << endl;
		}
	}

	ss << "awesome points (per min): " << sol.value << endl;

	return ss.str();
}

solution solve(RecipeBook recipes, vector<RecipeName> disabled, bool uranium, bool plutonium)
{
	//cout << "configuring or-tools solver" << endl;
	// Basic solver using GLOP
	MPSolver solver("satisfactory-optimizer", MPSolver::GLOP_LINEAR_PROGRAMMING);
	
	// All recipes have a lower bound of zero and no upper bound
	vector<MPVariable*> vars;
	solver.MakeNumVarArray(RECIPE_SIZE, 0.0, MPSolver::infinity(), "var", &vars);
	// Except for resource nodes and geothermal generators
	for(pair<RecipeName,float> entry : worldLimits())
	{
		vars[entry.first]->SetUB(entry.second);
	}
	
	// Disable recipes passed in as disabled
	for( RecipeName recipe : disabled )
	{
		vars[recipe]->SetUB(0);
	}
	
	// Constraints ensure that all resources (including power) are non-negative
	vector<MPConstraint*> constraints(RESOURCE_SIZE);
	for(size_t resource_idx = 0; resource_idx < RESOURCE_SIZE; ++resource_idx)
	{
		//TODO: fix up
		if( !uranium && resource_idx == RESOURCE_URANIUM_WASTE )
		{
			constraints[resource_idx] = solver.MakeRowConstraint(0.0, 0.0);
		}
		else if( !plutonium && resource_idx == RESOURCE_PLUTONIUM_WASTE )
		{
			constraints[resource_idx] = solver.MakeRowConstraint(0.0, 0.0);
		}
		else if( resource_idx == RESOURCE_NON_FISSILE_URANIUM || resource_idx == RESOURCE_PLUTONIUM_PELLET || resource_idx == RESOURCE_ENCASED_PLUTONIUM_CELL )
		{
			constraints[resource_idx] = solver.MakeRowConstraint(0.0, 0.0);
		}
		else
		{
			constraints[resource_idx] = solver.MakeRowConstraint(0.0, MPSolver::infinity());
		}
	}
	for(RecipeEntry recipe : recipes)
	{
		for(ResourceEntry resource : recipe.second)
		{
			constraints[resource.first]->SetCoefficient(vars[recipe.first], resource.second);
		}
	}

	// Constraint that ensures we are running enough sinks to handle all output
	MPConstraint* const ct = solver.MakeRowConstraint(0.0, MPSolver::infinity());
	for(RecipeEntry recipe : recipes)
	{
		float coefficient = 0.0;
		for(ResourceEntry resource : recipe.second)
		{
			if(resource.first != RESOURCE_POWER && resource.first != RESOURCE_URANIUM_WASTE && resource.first != RESOURCE_PLUTONIUM_WASTE)
			{
				coefficient -= resource.second;
			}
		}
		ct->SetCoefficient(vars[recipe.first], coefficient);
	}
	ct->SetCoefficient(vars[RECIPE_AWESOME_SINK], 780);
	
	// Objective to maximize is the total generated awesome points
	MPObjective* const objective = solver.MutableObjective();
	for(RecipeEntry recipe : recipes)
	{
		float point_value = 0;
		for(ResourceEntry resource : recipe.second)
		{
			point_value += awesomeValue(resource.first) * resource.second;
		}
		objective->SetCoefficient(vars[recipe.first], point_value);
	}
	objective->SetMaximization();

	//cout << "running or-tools solver" << endl;
	// Let it go
	solver.Solve();
	
	solution sol;
	for(RecipeEntry recipe : recipes)
	{
		if( vars[recipe.first]->solution_value() > 0.1 )
		{
			sol.recipes[recipe.first] = vars[recipe.first]->solution_value();
			for(ResourceEntry resource : recipe.second)
			{
				sol.resources[resource.first] += vars[recipe.first]->solution_value() * resource.second;
			}
		}
	}	
	sol.value = objective->Value();
	
	return sol;
}

int main(int argc, char** argv)
{
	cout << "hello world!" << endl;
	
	// Number formatting
	cout.imbue(locale(""));
	cout << setprecision(3) << fixed << endl;
	
	// Option parsing
	bool verbose = false;
	bool uranium = false;
	bool plutonium = false;
	int opt;
	while((opt = getopt (argc, argv, "upv")) != -1)
	{
		switch(opt)
		{
			case 'u':
				uranium = true;
			break;
			case 'p':
				plutonium = true;
			break;
			case 'v':
				verbose = true;
			break;
			case '?':
				cout << "USAGE: optimizer [-u] [-p] [-v]" << endl;
				cout << "-u allow uranium waste" << endl;
				cout << "-p allow plutonium waste" << endl;
				cout << "-v verbose debug logging" << endl;
				exit(1);
		}
	}
	
	double overclockLimestone = 2.0;
	double overclockNitrogen = (uranium || plutonium) ? 1.0 : 2.0;
	// Generate all recipes
	RecipeBook recipes = generateRecipes(overclockLimestone, overclockNitrogen);
	// Debug output
	if(verbose)
	{
		for(RecipeEntry recipe : recipes)
		{
			cout << recipeToString(recipe.first) << ":" << endl;
			for(ResourceEntry resource : recipe.second)
			{
				cout << "  " << resourceToString(resource.first) << ": " << resource.second << endl;
			}
		}
	}
	
	solution sol = solve(recipes, vector<RecipeName>(), uranium, plutonium);
	
	cout << toString(sol) << endl;
	
	vector< pair<RecipeName, float> > recipeImpact;
	for( size_t index = RECIPE_FIRST_STANDARD; index < RECIPE_SIZE; ++index )
	{
		float deprivedValue = solve(recipes, {(RecipeName)index}, uranium, plutonium).value;
		float impact = (sol.value - deprivedValue) / sol.value;
		recipeImpact.push_back( make_pair<RecipeName, float>((RecipeName)index, std::move(impact)) );
	}
	std::sort(
		std::begin(recipeImpact), 
		std::end(recipeImpact), 
		[](const pair<RecipeName, float>& a, const pair<RecipeName, float>& b)
		{
			return a.second > b.second;
		}
	);
	cout << "recipe impact:" << endl;
	for( pair<RecipeName, float> entry : recipeImpact )
	{
		if( sol.recipes[entry.first] > 0.01 )
		{
			cout << "  " << recipeToString(entry.first) << ": " << entry.second << endl;
		}
	}

	cout << "goodbye world!" << endl;
	return 0;
}