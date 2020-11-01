#include "ResourceName.hpp"
#include "RecipeName.hpp"
#include "RecipeDefinition.hpp"

#include "ortools/linear_solver/linear_solver.h"

#include <iostream>
#include <locale>
#include <stdio.h>

using namespace std;
using namespace operations_research;

int main(int argc, char** argv)
{
	cout << "hello world!" << endl;
	
	// Number formatting
	cout.imbue(locale(""));
	cout << setprecision(3) << fixed << endl;
	
	// Option parsing
	bool verbose = false;
	bool nuclear = false;
	int opt;
	while((opt = getopt (argc, argv, "nv")) != -1)
	{
		switch(opt)
		{
			case 'n':
				nuclear = true;
			break;
			case 'v':
				verbose = true;
			break;
			case '?':
				cout << "USAGE: optimizer [-n] [-v]" << endl;
				cout << "-n allow nuclear power" << endl;
				cout << "-v verbose debug logging" << endl;
				exit(1);
		}
	}
	
	// Generate all recipes
	RecipeBook recipes = generateRecipes();
	// Disable nuclear power
	if(!nuclear)
	{
		recipes[RECIPE_POWER_NUCLEAR_POWER_PLANT] = {};
	}
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
	
	cout << "configuring or-tools solver" << endl;
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
	
	// Constraints ensure that all resources (including power) are non-negative
	vector<MPConstraint*> constraints(RESOURCE_SIZE);
	for(size_t resource_idx = 0; resource_idx < RESOURCE_SIZE; ++resource_idx)
	{
		constraints[resource_idx] = solver.MakeRowConstraint(0.0, MPSolver::infinity());
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
			if(resource.first != RESOURCE_POWER)
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

	cout << "running or-tools solver" << endl;
	// Let it go
	solver.Solve();
	
	// Print recipe usage
	cout << "recipe usage (buildings):" << endl;
	for(RecipeEntry recipe : recipes)
	{
		if( vars[recipe.first]->solution_value() > 0.1 )
		{
			cout << "  " << recipeToString(recipe.first) << ": " << vars[recipe.first]->solution_value() << endl;
		}
	}

	// Print resource production
	vector<float> sunk(RESOURCE_SIZE,0.0);
	for(RecipeEntry recipe : recipes)
	{
		for(ResourceEntry resource : recipe.second)
		{
			sunk[resource.first] += vars[recipe.first]->solution_value() * resource.second;
		}
	}
	cout << "resources sunk (per min):" << endl;
	for(size_t resource_idx = 0; resource_idx < RESOURCE_SIZE; ++resource_idx)
	{
		if(sunk[resource_idx] > 0.1)
		{
			cout << "  " << resourceToString(resource_idx) << ": " << sunk[resource_idx] << endl;
		}
	}

	cout << "awesome points (per min): " << objective->Value() << endl;
	
	// Debug output
	/*
	ResourceName resource_idx = RESOURCE_IRON_INGOT;
	cout << "Resource " << resourceToString(resource_idx) << " is in:" << endl;
	for(RecipeEntry recipe : recipes)
	{
		if(recipe.second.count(resource_idx) != 0 && vars[recipe.first]->solution_value() != 0)
		{
			float value = vars[recipe.first]->solution_value() * recipe.second[resource_idx];
			cout << "  " << recipeToString(recipe.first) << ": " << value << endl;
		}
	}
	*/
	
	cout << "goodbye world!" << endl;
	return 0;
}