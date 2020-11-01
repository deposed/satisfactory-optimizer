#ifndef _RECIPEDEFINITION_HPP_
#define _RECIPEDEFINITION_HPP_

#include <map>
#include <vector>
#include <cmath>

#include "RecipeName.hpp"
#include "ResourceName.hpp"

constexpr float POWER_MINER_163 = 30.0 * std::pow(1.63,1.6);
constexpr float POWER_MINER_250 = 30.0 * std::pow(2.50,1.6);
constexpr float POWER_EXTRACTOR_250 = 40.0 * std::pow(2.50,1.6);
constexpr float POWER_SMELTER = 4;
constexpr float POWER_FOUNDRY = 16;
constexpr float POWER_CONSTRUCTOR = 4;
constexpr float POWER_ASSEMBLER = 15;
constexpr float POWER_MANUFACTURER = 55;
constexpr float POWER_REFINERY = 30;
constexpr float POWER_PACKAGER = 10;

typedef std::map<ResourceName, float> RecipeDefinition;
typedef std::pair<ResourceName, float> ResourceEntry;

typedef std::map<RecipeName, RecipeDefinition> RecipeBook;
typedef std::pair<RecipeName, RecipeDefinition> RecipeEntry;

RecipeBook generateRecipes()
{
	RecipeBook recipes;
	
	recipes[RECIPE_SOURCE_LIMESTONE_IMPURE] = {
		{RESOURCE_LIMESTONE, 300},
		{RESOURCE_POWER, -POWER_MINER_250}
	};
	recipes[RECIPE_SOURCE_LIMESTONE_NORMAL] = {
		{RESOURCE_LIMESTONE, 600},
		{RESOURCE_POWER, -POWER_MINER_250}
	};
	recipes[RECIPE_SOURCE_LIMESTONE_PURE] = {
		{RESOURCE_LIMESTONE, 780},
		{RESOURCE_POWER, -POWER_MINER_163}
	};
	recipes[RECIPE_SOURCE_IRON_IMPURE] = {
		{RESOURCE_IRON_ORE, 300},
		{RESOURCE_POWER, -POWER_MINER_250}
	};
	recipes[RECIPE_SOURCE_IRON_NORMAL] = {
		{RESOURCE_IRON_ORE, 600},
		{RESOURCE_POWER, -POWER_MINER_250}
	};
	recipes[RECIPE_SOURCE_IRON_PURE] = {
		{RESOURCE_IRON_ORE, 780},
		{RESOURCE_POWER, -POWER_MINER_163}
	};
	recipes[RECIPE_SOURCE_COPPER_IMPURE] = {
		{RESOURCE_COPPER_ORE, 300},
		{RESOURCE_POWER, -POWER_MINER_250}
	};
	recipes[RECIPE_SOURCE_COPPER_NORMAL] = {
		{RESOURCE_COPPER_ORE, 600},
		{RESOURCE_POWER, -POWER_MINER_250}
	};
	recipes[RECIPE_SOURCE_COPPER_PURE] = {
		{RESOURCE_COPPER_ORE, 780},
		{RESOURCE_POWER, -POWER_MINER_163}
	};
	recipes[RECIPE_SOURCE_CATERIUM_IMPURE] = {
		{RESOURCE_CATERIUM_ORE, 300},
		{RESOURCE_POWER, -POWER_MINER_250}
	};
	recipes[RECIPE_SOURCE_CATERIUM_NORMAL] = {
		{RESOURCE_CATERIUM_ORE, 600},
		{RESOURCE_POWER, -POWER_MINER_250}
	};
	recipes[RECIPE_SOURCE_CATERIUM_PURE] = {
		{RESOURCE_CATERIUM_ORE, 780},
		{RESOURCE_POWER, -POWER_MINER_163}
	};
	recipes[RECIPE_SOURCE_COAL_IMPURE] = {
		{RESOURCE_COAL, 300},
		{RESOURCE_POWER, -POWER_MINER_250}
	};
	recipes[RECIPE_SOURCE_COAL_NORMAL] = {
		{RESOURCE_COAL, 600},
		{RESOURCE_POWER, -POWER_MINER_250}
	};
	recipes[RECIPE_SOURCE_COAL_PURE] = {
		{RESOURCE_COAL, 780},
		{RESOURCE_POWER, -POWER_MINER_163}
	};
	recipes[RECIPE_SOURCE_OIL_IMPURE] = {
		{RESOURCE_CRUDE_OIL, 150},
		{RESOURCE_POWER, -POWER_EXTRACTOR_250}
	};
	recipes[RECIPE_SOURCE_OIL_NORMAL] = {
		{RESOURCE_CRUDE_OIL, 300},
		{RESOURCE_POWER, -POWER_EXTRACTOR_250}
	};
	recipes[RECIPE_SOURCE_OIL_PURE] = {
		{RESOURCE_CRUDE_OIL, 600},
		{RESOURCE_POWER, -POWER_EXTRACTOR_250}
	};
	recipes[RECIPE_SOURCE_SULFUR_IMPURE] = {
		{RESOURCE_SULFUR, 300},
		{RESOURCE_POWER, -POWER_MINER_250}
	};
	recipes[RECIPE_SOURCE_SULFUR_NORMAL] = {
		{RESOURCE_SULFUR, 600},
		{RESOURCE_POWER, -POWER_MINER_250}
	};
	recipes[RECIPE_SOURCE_SULFUR_PURE] = {
		{RESOURCE_SULFUR, 780},
		{RESOURCE_POWER, -POWER_MINER_163}
	};
	recipes[RECIPE_SOURCE_BAUXITE_IMPURE] = {
		{RESOURCE_BAUXITE, 300},
		{RESOURCE_POWER, -POWER_MINER_250}
	};
	recipes[RECIPE_SOURCE_BAUXITE_NORMAL] = {
		{RESOURCE_BAUXITE, 600},
		{RESOURCE_POWER, -POWER_MINER_250}
	};
	recipes[RECIPE_SOURCE_BAUXITE_PURE] = {
		{RESOURCE_BAUXITE, 780},
		{RESOURCE_POWER, -POWER_MINER_163}
	};
	recipes[RECIPE_SOURCE_QUARTZ_IMPURE] = {
		{RESOURCE_RAW_QUARTZ, 300},
		{RESOURCE_POWER, -POWER_MINER_250}
	};
	recipes[RECIPE_SOURCE_QUARTZ_NORMAL] = {
		{RESOURCE_RAW_QUARTZ, 600},
		{RESOURCE_POWER, -POWER_MINER_250}
	};
	recipes[RECIPE_SOURCE_QUARTZ_PURE] = {
		{RESOURCE_RAW_QUARTZ, 780},
		{RESOURCE_POWER, -POWER_MINER_163}
	};
	recipes[RECIPE_SOURCE_URANIUM_IMPURE] = {
		{RESOURCE_URANIUM, 300},
		{RESOURCE_POWER, -POWER_MINER_250}
	};
	recipes[RECIPE_SOURCE_URANIUM_NORMAL] = {
		{RESOURCE_URANIUM, 600},
		{RESOURCE_POWER, -POWER_MINER_250}
	};
	recipes[RECIPE_SOURCE_URANIUM_PURE] = {
		{RESOURCE_URANIUM, 780},
		{RESOURCE_POWER, -POWER_MINER_163}
	};
	recipes[RECIPE_SOURCE_WATER] = {
		{RESOURCE_WATER, 120},
		{RESOURCE_POWER, -20}
	};

	recipes[RECIPE_IRON_INGOT] = {
		{RESOURCE_IRON_ORE, -30},
		{RESOURCE_IRON_INGOT, 30},
		{RESOURCE_POWER, -POWER_SMELTER}
	};
	recipes[RECIPE_COPPER_INGOT] = {
		{RESOURCE_COPPER_ORE, -30},
		{RESOURCE_COPPER_INGOT, 30},
		{RESOURCE_POWER, -POWER_SMELTER}
	};
	recipes[RECIPE_CATERIUM_INGOT] = {
		{RESOURCE_CATERIUM_ORE, -45},
		{RESOURCE_CATERIUM_INGOT, 15},
		{RESOURCE_POWER, -POWER_SMELTER}
	};
	recipes[RECIPE_PURE_ALUMINUM_INGOT] = {
		{RESOURCE_ALUMINUM_SCRAP, -144},
		{RESOURCE_ALUMINUM_INGOT, 36},
		{RESOURCE_POWER, -POWER_SMELTER}
	};
	
	recipes[RECIPE_COPPER_ALLOY_INGOT] = {
		{RESOURCE_COPPER_ORE, -50},
		{RESOURCE_IRON_ORE, -25},
		{RESOURCE_COPPER_INGOT, 100},
		{RESOURCE_POWER, -POWER_FOUNDRY}
	};
	recipes[RECIPE_IRON_ALLOY_INGOT] = {
		{RESOURCE_COPPER_ORE, -20},
		{RESOURCE_IRON_ORE, -20},
		{RESOURCE_COPPER_INGOT, 50},
		{RESOURCE_POWER, -POWER_FOUNDRY}
	};
	recipes[RECIPE_STEEL_INGOT] = {
		{RESOURCE_COAL, -45},
		{RESOURCE_IRON_ORE, -45},
		{RESOURCE_STEEL_INGOT, 45},
		{RESOURCE_POWER, -POWER_FOUNDRY}
	};
	recipes[RECIPE_SOLID_STEEL_INGOT] = {
		{RESOURCE_COAL, -40},
		{RESOURCE_IRON_INGOT, -40},
		{RESOURCE_STEEL_INGOT, 60},
		{RESOURCE_POWER, -POWER_FOUNDRY}
	};
	recipes[RECIPE_COMPACTED_STEEL_INGOT] = {
		{RESOURCE_COMPACTED_COAL, -11.25},
		{RESOURCE_IRON_ORE, -22.5},
		{RESOURCE_STEEL_INGOT, 37.5},
		{RESOURCE_POWER, -POWER_FOUNDRY}
	};
	recipes[RECIPE_ALUMINUM_INGOT] = {
		{RESOURCE_ALUMINUM_SCRAP, -240},
		{RESOURCE_SILICA, -140},
		{RESOURCE_ALUMINUM_INGOT, 80},
		{RESOURCE_POWER, -POWER_FOUNDRY}
	};
	recipes[RECIPE_COKE_STEEL_INGOT] = {
		{RESOURCE_PETROLEUM_COKE, -75},
		{RESOURCE_IRON_ORE, -75},
		{RESOURCE_STEEL_INGOT, 100},
		{RESOURCE_POWER, -POWER_FOUNDRY}
	};
	
	recipes[RECIPE_IRON_PLATE] = {
		{RESOURCE_IRON_INGOT, -30},
		{RESOURCE_IRON_ROD, 20},
		{RESOURCE_POWER, -POWER_CONSTRUCTOR}
	};
	recipes[RECIPE_IRON_ROD] = {
		{RESOURCE_IRON_INGOT, -15},
		{RESOURCE_IRON_ROD, 15},
		{RESOURCE_POWER, -POWER_CONSTRUCTOR}
	};
	recipes[RECIPE_SCREW] = {
		{RESOURCE_IRON_ROD, -10},
		{RESOURCE_SCREW, 40},
		{RESOURCE_POWER, -POWER_CONSTRUCTOR}
	};
	recipes[RECIPE_COPPER_SHEET] = {
		{RESOURCE_COPPER_INGOT, -20},
		{RESOURCE_COPPER_SHEET, 10},
		{RESOURCE_POWER, -POWER_CONSTRUCTOR}
	};
	recipes[RECIPE_CASTED_SCREW] = {
		{RESOURCE_IRON_INGOT, -12.5},
		{RESOURCE_SCREW, 50},
		{RESOURCE_POWER, -POWER_CONSTRUCTOR}
	};
	recipes[RECIPE_STEEL_BEAM] = {
		{RESOURCE_STEEL_INGOT, -60},
		{RESOURCE_STEEL_BEAM, 15},
		{RESOURCE_POWER, -POWER_CONSTRUCTOR}
	};
	recipes[RECIPE_STEEL_PIPE] = {
		{RESOURCE_STEEL_INGOT, -30},
		{RESOURCE_STEEL_PIPE, 20},
		{RESOURCE_POWER, -POWER_CONSTRUCTOR}
	};
	recipes[RECIPE_STEEL_ROD] = {
		{RESOURCE_STEEL_INGOT, -12},
		{RESOURCE_IRON_ROD, 48},
		{RESOURCE_POWER, -POWER_CONSTRUCTOR}
	};
	recipes[RECIPE_STEEL_SCREW] = {
		{RESOURCE_STEEL_BEAM, -5},
		{RESOURCE_SCREW, 260},
		{RESOURCE_POWER, -POWER_CONSTRUCTOR}
	};
	recipes[RECIPE_WIRE] = {
		{RESOURCE_COPPER_INGOT, -15},
		{RESOURCE_WIRE, 30},
		{RESOURCE_POWER, -POWER_CONSTRUCTOR}
	};
	recipes[RECIPE_CABLE] = {
		{RESOURCE_WIRE, -60},
		{RESOURCE_CABLE, 30},
		{RESOURCE_POWER, -POWER_CONSTRUCTOR}
	};
	recipes[RECIPE_QUICKWIRE] = {
		{RESOURCE_CATERIUM_INGOT, -12},
		{RESOURCE_QUICKWIRE, 60},
		{RESOURCE_POWER, -POWER_CONSTRUCTOR}
	};
	recipes[RECIPE_IRON_WIRE] = {
		{RESOURCE_IRON_INGOT, -12.5},
		{RESOURCE_WIRE, 22.5},
		{RESOURCE_POWER, -POWER_CONSTRUCTOR}
	};
	recipes[RECIPE_CATERIUM_WIRE] = {
		{RESOURCE_CATERIUM_INGOT, -15},
		{RESOURCE_WIRE, 120},
		{RESOURCE_POWER, -POWER_CONSTRUCTOR}
	};
	recipes[RECIPE_CONCRETE] = {
		{RESOURCE_LIMESTONE, -45},
		{RESOURCE_CONCRETE, 15},
		{RESOURCE_POWER, -POWER_CONSTRUCTOR}
	};
	recipes[RECIPE_QUARTZ_CRYSTAL] = {
		{RESOURCE_RAW_QUARTZ, -37.5},
		{RESOURCE_QUARTZ_CRYSTAL, 22.5},
		{RESOURCE_POWER, -POWER_CONSTRUCTOR}
	};
	recipes[RECIPE_SILICA] = {
		{RESOURCE_RAW_QUARTZ, -22.5},
		{RESOURCE_SILICA, 37.5},
		{RESOURCE_POWER, -POWER_CONSTRUCTOR}
	};
	recipes[RECIPE_BIOMASS_WOOD] = {
		{RESOURCE_WOOD, -60},
		{RESOURCE_BIOMASS, 300},
		{RESOURCE_POWER, -POWER_CONSTRUCTOR}
	};
	recipes[RECIPE_BIOMASS_LEAVES] = {
		{RESOURCE_LEAVES, -120},
		{RESOURCE_BIOMASS, 60},
		{RESOURCE_POWER, -POWER_CONSTRUCTOR}
	};
	recipes[RECIPE_BIOMASS_MYCELIA] = {
		{RESOURCE_MYCELIA, -150},
		{RESOURCE_BIOMASS, 150},
		{RESOURCE_POWER, -POWER_CONSTRUCTOR}
	};
	recipes[RECIPE_SOLID_BIOFUEL] = {
		{RESOURCE_BIOMASS, -120},
		{RESOURCE_SOLID_BIOFUEL, 60},
		{RESOURCE_POWER, -POWER_CONSTRUCTOR}
	};
	recipes[RECIPE_SPIKED_REBAR] = {
		{RESOURCE_IRON_ROD, -15},
		{RESOURCE_SPIKED_REBAR, 15},
		{RESOURCE_POWER, -POWER_CONSTRUCTOR}
	};
	recipes[RECIPE_COLOR_CARTRIDGE] = {
		{RESOURCE_FLOWER_PETALS, -37.5},
		{RESOURCE_COLOR_CARTRIDGE, 75},
		{RESOURCE_POWER, -POWER_CONSTRUCTOR}
	};
	recipes[RECIPE_BIOCOAL] = {
		{RESOURCE_BIOMASS, -37.5},
		{RESOURCE_COAL, 45},
		{RESOURCE_POWER, -POWER_CONSTRUCTOR}
	};
	recipes[RECIPE_CHARCOAL] = {
		{RESOURCE_WOOD, -15},
		{RESOURCE_COAL, 150},
		{RESOURCE_POWER, -POWER_CONSTRUCTOR}
	};
	recipes[RECIPE_EMPTY_CANISTER] = {
		{RESOURCE_PLASTIC, -30},
		{RESOURCE_EMPTY_CANISTER, 60},
		{RESOURCE_POWER, -POWER_CONSTRUCTOR}
	};
	recipes[RECIPE_STEEL_CANISTER] = {
		{RESOURCE_STEEL_INGOT, -60},
		{RESOURCE_EMPTY_CANISTER, 40},
		{RESOURCE_POWER, -POWER_CONSTRUCTOR}
	};
	
	recipes[RECIPE_REINFORCED_IRON_PLATE] = {
		{RESOURCE_IRON_PLATE, -30},
		{RESOURCE_SCREW, -60},
		{RESOURCE_REINFORCED_IRON_PLATE, 5},
		{RESOURCE_POWER, -POWER_ASSEMBLER}
	};
	recipes[RECIPE_MODULAR_FRAME] = {
		{RESOURCE_REINFORCED_IRON_PLATE, -3},
		{RESOURCE_IRON_ROD, -12},
		{RESOURCE_MODULAR_FRAME, 2},
		{RESOURCE_POWER, -POWER_ASSEMBLER}
	};
	recipes[RECIPE_STITCHED_IRON_PLATE] = {
		{RESOURCE_IRON_PLATE, -18.75},
		{RESOURCE_WIRE, -37.5},
		{RESOURCE_REINFORCED_IRON_PLATE, 5.625},
		{RESOURCE_POWER, -POWER_ASSEMBLER}
	};
	recipes[RECIPE_BOLTED_FRAME] = {
		{RESOURCE_REINFORCED_IRON_PLATE, -7.5},
		{RESOURCE_SCREW, -140},
		{RESOURCE_MODULAR_FRAME, 5},
		{RESOURCE_POWER, -POWER_ASSEMBLER}
	};
	recipes[RECIPE_BOLTED_IRON_PLATE] = {
		{RESOURCE_IRON_PLATE, -90},
		{RESOURCE_SCREW, -250},
		{RESOURCE_REINFORCED_IRON_PLATE, 15},
		{RESOURCE_POWER, -POWER_ASSEMBLER}
	};
	recipes[RECIPE_STEELED_FRAME] = {
		{RESOURCE_REINFORCED_IRON_PLATE, -2},
		{RESOURCE_STEEL_PIPE, -10},
		{RESOURCE_MODULAR_FRAME, 3},
		{RESOURCE_POWER, -POWER_ASSEMBLER}
	};
	recipes[RECIPE_ENCASED_INDUSTRIAL_BEAM] = {
		{RESOURCE_STEEL_BEAM, -24},
		{RESOURCE_CONCRETE, -30},
		{RESOURCE_ENCASED_INDUSTRIAL_BEAM, 6},
		{RESOURCE_POWER, -POWER_ASSEMBLER}
	};
	recipes[RECIPE_ENCASED_INDUSTRIAL_PIPE] = {
		{RESOURCE_STEEL_PIPE, -28},
		{RESOURCE_CONCRETE, -20},
		{RESOURCE_ENCASED_INDUSTRIAL_BEAM, 4},
		{RESOURCE_POWER, -POWER_ASSEMBLER}
	};
	recipes[RECIPE_ALCLAD_ALUMINUM_SHEET] = {
		{RESOURCE_ALUMINUM_INGOT, -60},
		{RESOURCE_COPPER_INGOT, -22.5},
		{RESOURCE_ALCLAD_ALUMINUM_SHEET, 30},
		{RESOURCE_POWER, -POWER_ASSEMBLER}
	};
	recipes[RECIPE_ADHERED_IRON_PLATE] = {
		{RESOURCE_IRON_PLATE, -11.25},
		{RESOURCE_RUBBER, -3.75},
		{RESOURCE_REINFORCED_IRON_PLATE, 3.75},
		{RESOURCE_POWER, -POWER_ASSEMBLER}
	};
	recipes[RECIPE_STEEL_COATED_PLATE] = {
		{RESOURCE_STEEL_INGOT, -7.5},
		{RESOURCE_PLASTIC, -5},
		{RESOURCE_IRON_PLATE, 45},
		{RESOURCE_POWER, -POWER_ASSEMBLER}
	};
	recipes[RECIPE_COATED_IRON_PLATE] = {
		{RESOURCE_IRON_INGOT, -50},
		{RESOURCE_PLASTIC, -10},
		{RESOURCE_IRON_PLATE, 75},
		{RESOURCE_POWER, -POWER_ASSEMBLER}
	};
	recipes[RECIPE_AI_LIMITER] = {
		{RESOURCE_COPPER_SHEET, -25},
		{RESOURCE_QUICKWIRE, -100},
		{RESOURCE_AI_LIMITER, 5},
		{RESOURCE_POWER, -POWER_ASSEMBLER}
	};
	recipes[RECIPE_FUSED_QUICKWIRE] = {
		{RESOURCE_COPPER_INGOT, -37.5},
		{RESOURCE_CATERIUM_INGOT, -7.5},
		{RESOURCE_QUICKWIRE, 90},
		{RESOURCE_POWER, -POWER_ASSEMBLER}
	};
	recipes[RECIPE_FUSED_WIRE] = {
		{RESOURCE_COPPER_INGOT, -12},
		{RESOURCE_CATERIUM_INGOT, -3},
		{RESOURCE_WIRE, 90},
		{RESOURCE_POWER, -POWER_ASSEMBLER}
	};
	recipes[RECIPE_CIRCUIT_BOARD] = {
		{RESOURCE_COPPER_SHEET, -15},
		{RESOURCE_PLASTIC, -30},
		{RESOURCE_CIRCUIT_BOARD, 7.5},
		{RESOURCE_POWER, -POWER_ASSEMBLER}
	};
	recipes[RECIPE_CATERIUM_CIRCUIT_BOARD] = {
		{RESOURCE_QUICKWIRE, -37.5},
		{RESOURCE_PLASTIC, -12.5},
		{RESOURCE_CIRCUIT_BOARD, 8.75},
		{RESOURCE_POWER, -POWER_ASSEMBLER}
	};
	recipes[RECIPE_QUICKWIRE_CABLE] = {
		{RESOURCE_QUICKWIRE, -7.5},
		{RESOURCE_RUBBER, -5},
		{RESOURCE_CABLE, 27.5},
		{RESOURCE_POWER, -POWER_ASSEMBLER}
	};
	recipes[RECIPE_INSULATED_CABLE] = {
		{RESOURCE_WIRE, -45},
		{RESOURCE_RUBBER, -30},
		{RESOURCE_CABLE, 100},
		{RESOURCE_POWER, -POWER_ASSEMBLER}
	};
	recipes[RECIPE_SILICONE_CIRCUIT_BOARD] = {
		{RESOURCE_COPPER_SHEET, -27.5},
		{RESOURCE_SILICA, -27.5},
		{RESOURCE_CIRCUIT_BOARD, 12.5},
		{RESOURCE_POWER, -POWER_ASSEMBLER}
	};
	recipes[RECIPE_ELECTRODE_CIRCUIT_BOARD] = {
		{RESOURCE_RUBBER, -30},
		{RESOURCE_PETROLEUM_COKE, -45},
		{RESOURCE_CIRCUIT_BOARD, 5},
		{RESOURCE_POWER, -POWER_ASSEMBLER}
	};
	recipes[RECIPE_ROTOR] = {
		{RESOURCE_IRON_ROD, -20},
		{RESOURCE_SCREW, -100},
		{RESOURCE_ROTOR, 4},
		{RESOURCE_POWER, -POWER_ASSEMBLER}
	};
	recipes[RECIPE_COPPER_ROTOR] = {
		{RESOURCE_COPPER_SHEET, -22.5},
		{RESOURCE_SCREW, -195},
		{RESOURCE_ROTOR, 11.25},
		{RESOURCE_POWER, -POWER_ASSEMBLER}
	};
	recipes[RECIPE_STEEL_ROTOR] = {
		{RESOURCE_STEEL_PIPE, -10},
		{RESOURCE_WIRE, -30},
		{RESOURCE_ROTOR, 5},
		{RESOURCE_POWER, -POWER_ASSEMBLER}
	};
	recipes[RECIPE_STATOR] = {
		{RESOURCE_STEEL_PIPE, -15},
		{RESOURCE_WIRE, -40},
		{RESOURCE_STATOR, 5},
		{RESOURCE_POWER, -POWER_ASSEMBLER}
	};
	recipes[RECIPE_MOTOR] = {
		{RESOURCE_ROTOR, -10},
		{RESOURCE_STATOR, -10},
		{RESOURCE_MOTOR, 5},
		{RESOURCE_POWER, -POWER_ASSEMBLER}
	};
	recipes[RECIPE_QUICKWIRE_STATOR] = {
		{RESOURCE_STEEL_PIPE, -16},
		{RESOURCE_QUICKWIRE, -60},
		{RESOURCE_STATOR, 8},
		{RESOURCE_POWER, -POWER_ASSEMBLER}
	};
	recipes[RECIPE_HEAT_SINK] = {
		{RESOURCE_ALCLAD_ALUMINUM_SHEET, -40},
		{RESOURCE_RUBBER, -70},
		{RESOURCE_HEAT_SINK, 10},
		{RESOURCE_POWER, -POWER_ASSEMBLER}
	};
	recipes[RECIPE_HEAT_EXCHANGER] = {
		{RESOURCE_ALCLAD_ALUMINUM_SHEET, -37.5},
		{RESOURCE_COPPER_SHEET, -56.25},
		{RESOURCE_HEAT_SINK, 13.125},
		{RESOURCE_POWER, -POWER_ASSEMBLER}
	};
	recipes[RECIPE_SMART_PLATING] = {
		{RESOURCE_REINFORCED_IRON_PLATE, -2},
		{RESOURCE_ROTOR, -2},
		{RESOURCE_SMART_PLATING, 2},
		{RESOURCE_POWER, -POWER_ASSEMBLER}
	};
	recipes[RECIPE_VERSATILE_FRAMEWORK] = {
		{RESOURCE_MODULAR_FRAME, -2.5},
		{RESOURCE_STEEL_BEAM, -30},
		{RESOURCE_VERSATILE_FRAMEWORK, 5},
		{RESOURCE_POWER, -POWER_ASSEMBLER}
	};
	recipes[RECIPE_AUTOMATED_WIRING] = {
		{RESOURCE_STATOR, -2.5},
		{RESOURCE_CABLE, -50},
		{RESOURCE_AUTOMATED_WIRING, 2.5},
		{RESOURCE_POWER, -POWER_ASSEMBLER}
	};
	recipes[RECIPE_BLACK_POWDER] = {
		{RESOURCE_COAL, -7.5},
		{RESOURCE_SULFUR, -15},
		{RESOURCE_BLACK_POWDER, 7.5},
		{RESOURCE_POWER, -POWER_ASSEMBLER}
	};
	recipes[RECIPE_NOBELISK] = {
		{RESOURCE_BLACK_POWDER, -15},
		{RESOURCE_STEEL_PIPE, -30},
		{RESOURCE_NOBELISK, 3},
		{RESOURCE_POWER, -POWER_ASSEMBLER}
	};
	recipes[RECIPE_FINE_BLACK_POWDER] = {
		{RESOURCE_COMPACTED_COAL, -3.75},
		{RESOURCE_SULFUR, -7.5},
		{RESOURCE_BLACK_POWDER, 15},
		{RESOURCE_POWER, -POWER_ASSEMBLER}
	};
	recipes[RECIPE_FABRIC] = {
		{RESOURCE_MYCELIA, -15},
		{RESOURCE_BIOMASS, -75},
		{RESOURCE_FABRIC, 15},
		{RESOURCE_POWER, -POWER_ASSEMBLER}
	};
	recipes[RECIPE_CHEAP_SILICA] = {
		{RESOURCE_RAW_QUARTZ, -11.25},
		{RESOURCE_LIMESTONE, -18.75},
		{RESOURCE_SILICA, 26.25},
		{RESOURCE_POWER, -POWER_ASSEMBLER}
	};
	recipes[RECIPE_FINE_CONCRETE] = {
		{RESOURCE_LIMESTONE, -30},
		{RESOURCE_SILICA, -7.5},
		{RESOURCE_CONCRETE, 25},
		{RESOURCE_POWER, -POWER_ASSEMBLER}
	};
	recipes[RECIPE_COMPACTED_COAL] = {
		{RESOURCE_COAL, -25},
		{RESOURCE_SULFUR, -25},
		{RESOURCE_COMPACTED_COAL, 25},
		{RESOURCE_POWER, -POWER_ASSEMBLER}
	};
	recipes[RECIPE_RUBBER_CONCRETE] = {
		{RESOURCE_LIMESTONE, -50},
		{RESOURCE_RUBBER, -10},
		{RESOURCE_CONCRETE, 45},
		{RESOURCE_POWER, -POWER_ASSEMBLER}
	};
	recipes[RECIPE_CRYSTAL_COMPUTER] = {
		{RESOURCE_CIRCUIT_BOARD, -7.5},
		{RESOURCE_CRYSTAL_OSCILLATOR, -2.8125},
		{RESOURCE_COMPUTER, 2.8125},
		{RESOURCE_POWER, -POWER_ASSEMBLER}
	};
	recipes[RECIPE_ELECTROMAGNETIC_CONTROL_ROD] = {
		{RESOURCE_STATOR, -6},
		{RESOURCE_AI_LIMITER, -4},
		{RESOURCE_ELECTROMAGNETIC_CONTROL_ROD, 4},
		{RESOURCE_POWER, -POWER_ASSEMBLER}
	};
	recipes[RECIPE_ENCASED_URANIUM_CELL] = {
		{RESOURCE_URANIUM_PELLET, -40},
		{RESOURCE_CONCRETE, -9},
		{RESOURCE_ENCASED_URANIUM_CELL, 10},
		{RESOURCE_POWER, -POWER_ASSEMBLER}
	};
	recipes[RECIPE_ELECTROMAGNETIC_CONNECTION_ROD] = {
		{RESOURCE_STATOR, -10},
		{RESOURCE_HIGH_SPEED_CONNECTOR, -5},
		{RESOURCE_ELECTROMAGNETIC_CONTROL_ROD, 10},
		{RESOURCE_POWER, -POWER_ASSEMBLER}
	};
	recipes[RECIPE_COATED_IRON_CANISTER] = {
		{RESOURCE_IRON_PLATE, -30},
		{RESOURCE_COPPER_SHEET, -15},
		{RESOURCE_EMPTY_CANISTER, 60},
		{RESOURCE_POWER, -POWER_ASSEMBLER}
	};
	
	recipes[RECIPE_IODINE_INFUSED_FILTER] = {
		{RESOURCE_GAS_FILTER, -3.75},
		{RESOURCE_QUICKWIRE, -30},
		{RESOURCE_RUBBER, -7.5},
		{RESOURCE_IODINE_INFUSED_FILTER, 3.75},
		{RESOURCE_POWER, -POWER_MANUFACTURER}
	};
	recipes[RECIPE_RIFLE_CARTRIDGE] = {
		{RESOURCE_BEACON, -3},
		{RESOURCE_STEEL_PIPE, -30},
		{RESOURCE_BLACK_POWDER, -30},
		{RESOURCE_RUBBER, -30},
		{RESOURCE_RIFLE_CARTRIDGE, 15},
		{RESOURCE_POWER, -POWER_MANUFACTURER}
	};
	recipes[RECIPE_SEISMIC_NOBELISK] = {
		{RESOURCE_STEEL_PIPE, -12},
		{RESOURCE_BLACK_POWDER, -12},
		{RESOURCE_CRYSTAL_OSCILLATOR, -1.5},
		{RESOURCE_NOBELISK, 6},
		{RESOURCE_POWER, -POWER_MANUFACTURER}
	};
	recipes[RECIPE_GAS_FILTER] = {
		{RESOURCE_COAL, -37.5},
		{RESOURCE_RUBBER, -15},
		{RESOURCE_FABRIC, -15},
		{RESOURCE_GAS_FILTER, 7.5},
		{RESOURCE_POWER, -POWER_MANUFACTURER}
	};
	recipes[RECIPE_BEACON] = {
		{RESOURCE_IRON_PLATE, -22.5},
		{RESOURCE_IRON_ROD, -7.5},
		{RESOURCE_WIRE, -112.5},
		{RESOURCE_CABLE, -15},
		{RESOURCE_BEACON, 7.5},
		{RESOURCE_POWER, -POWER_MANUFACTURER}
	};
	recipes[RECIPE_CRYSTAL_BEACON] = {
		{RESOURCE_STEEL_BEAM, -2},
		{RESOURCE_STEEL_PIPE, -8},
		{RESOURCE_CRYSTAL_OSCILLATOR, -0.5},
		{RESOURCE_BEACON, 10},
		{RESOURCE_POWER, -POWER_MANUFACTURER}
	};
	recipes[RECIPE_HIGH_SPEED_CONNECTOR] = {
		{RESOURCE_QUICKWIRE, -210},
		{RESOURCE_CABLE, -37.5},
		{RESOURCE_CIRCUIT_BOARD, -3.75},
		{RESOURCE_HIGH_SPEED_CONNECTOR, 3.75},
		{RESOURCE_POWER, -POWER_MANUFACTURER}
	};
	recipes[RECIPE_SILICONE_HIGH_SPEED_CONNECTOR] = {
		{RESOURCE_QUICKWIRE, -90},
		{RESOURCE_SILICA, -37.5},
		{RESOURCE_CIRCUIT_BOARD, -3},
		{RESOURCE_HIGH_SPEED_CONNECTOR, 3},
		{RESOURCE_POWER, -POWER_MANUFACTURER}
	};
	recipes[RECIPE_BATTERY] = {
		{RESOURCE_ALCLAD_ALUMINUM_SHEET, -15},
		{RESOURCE_WIRE, -30},
		{RESOURCE_SULFUR, -37.5},
		{RESOURCE_PLASTIC, -15},
		{RESOURCE_BATTERY, 5.625},
		{RESOURCE_POWER, -POWER_MANUFACTURER}
	};
	recipes[RECIPE_SUPERCOMPUTER] = {
		{RESOURCE_COMPUTER, -3.75},
		{RESOURCE_AI_LIMITER, -3.75},
		{RESOURCE_HIGH_SPEED_CONNECTOR, -5.625},
		{RESOURCE_PLASTIC, -52.5},
		{RESOURCE_SUPERCOMPUTER, 1.875},
		{RESOURCE_POWER, -POWER_MANUFACTURER}
	};
	recipes[RECIPE_CRYSTAL_OSCILLATOR] = {
		{RESOURCE_QUARTZ_CRYSTAL, -18},
		{RESOURCE_CABLE, -14},
		{RESOURCE_REINFORCED_IRON_PLATE, -2.5},
		{RESOURCE_CRYSTAL_OSCILLATOR, 1},
		{RESOURCE_POWER, -POWER_MANUFACTURER}
	};
	recipes[RECIPE_RADIO_CONTROL_UNIT] = {
		{RESOURCE_HEAT_SINK, -10},
		{RESOURCE_RUBBER, -40},
		{RESOURCE_CRYSTAL_OSCILLATOR, -2.5},
		{RESOURCE_COMPUTER, -2.5},
		{RESOURCE_RADIO_CONTROL_UNIT, 2.5},
		{RESOURCE_POWER, -POWER_MANUFACTURER}
	};
	recipes[RECIPE_RADIO_CONTROL_SYSTEM] = {
		{RESOURCE_HEAT_SINK, -12.5},
		{RESOURCE_SUPERCOMPUTER, -1.25},
		{RESOURCE_QUARTZ_CRYSTAL, -37.5},
		{RESOURCE_RADIO_CONTROL_UNIT, 3.75},
		{RESOURCE_POWER, -POWER_MANUFACTURER}
	};
	recipes[RECIPE_INSULATED_CRYSTAL_OSCILLATOR] = {
		{RESOURCE_QUARTZ_CRYSTAL, -18.75},
		{RESOURCE_RUBBER, -13.125},
		{RESOURCE_AI_LIMITER, -1.875},
		{RESOURCE_CRYSTAL_OSCILLATOR, 1.875},
		{RESOURCE_POWER, -POWER_MANUFACTURER}
	};
	recipes[RECIPE_COMPUTER] = {
		{RESOURCE_CIRCUIT_BOARD, -25},
		{RESOURCE_CABLE, -22.5},
		{RESOURCE_PLASTIC, -45},
		{RESOURCE_SCREW, -130},
		{RESOURCE_COMPUTER, 2.5},
		{RESOURCE_POWER, -POWER_MANUFACTURER}
	};
	recipes[RECIPE_CATERIUM_COMPUTER] = {
		{RESOURCE_CIRCUIT_BOARD, -26.25},
		{RESOURCE_QUICKWIRE, -105},
		{RESOURCE_RUBBER, -45},
		{RESOURCE_COMPUTER, 3.75},
		{RESOURCE_POWER, -POWER_MANUFACTURER}
	};
	recipes[RECIPE_HEAVY_MODULAR_FRAME] = {
		{RESOURCE_MODULAR_FRAME, -10},
		{RESOURCE_STEEL_PIPE, -30},
		{RESOURCE_ENCASED_INDUSTRIAL_BEAM, -10},
		{RESOURCE_SCREW, -200},
		{RESOURCE_HEAVY_MODULAR_FRAME, 2},
		{RESOURCE_POWER, -POWER_MANUFACTURER}
	};
	recipes[RECIPE_HEAVY_FLEXIBLE_FRAME] = {
		{RESOURCE_MODULAR_FRAME, -18.75},
		{RESOURCE_RUBBER, -75},
		{RESOURCE_ENCASED_INDUSTRIAL_BEAM, -11.25},
		{RESOURCE_SCREW, -390},
		{RESOURCE_HEAVY_MODULAR_FRAME, 3.75},
		{RESOURCE_POWER, -POWER_MANUFACTURER}
	};
	recipes[RECIPE_HEAVY_ENCASED_FRAME] = {
		{RESOURCE_MODULAR_FRAME, -7.5},
		{RESOURCE_STEEL_PIPE, -33.75},
		{RESOURCE_ENCASED_INDUSTRIAL_BEAM, -9.375},
		{RESOURCE_CONCRETE, -20.625},
		{RESOURCE_HEAVY_MODULAR_FRAME, 2.8125},
		{RESOURCE_POWER, -POWER_MANUFACTURER}
	};
	recipes[RECIPE_AUTOMATED_SPEED_WIRING] = {
		{RESOURCE_STATOR, -3.75},
		{RESOURCE_WIRE, -75},
		{RESOURCE_HIGH_SPEED_CONNECTOR, -1.875},
		{RESOURCE_AUTOMATED_WIRING, 7.5},
		{RESOURCE_POWER, -POWER_MANUFACTURER}
	};
	recipes[RECIPE_FLEXIBLE_FRAMEWORK] = {
		{RESOURCE_MODULAR_FRAME, -3.75},
		{RESOURCE_STEEL_BEAM, -22.5},
		{RESOURCE_RUBBER, -30},
		{RESOURCE_VERSATILE_FRAMEWORK, 7.5},
		{RESOURCE_POWER, -POWER_MANUFACTURER}
	};
	recipes[RECIPE_PLASTIC_SMART_PLATING] = {
		{RESOURCE_REINFORCED_IRON_PLATE, -2.5},
		{RESOURCE_ROTOR, -2.5},
		{RESOURCE_PLASTIC, -7.5},
		{RESOURCE_SMART_PLATING, 5},
		{RESOURCE_POWER, -POWER_MANUFACTURER}
	};
	recipes[RECIPE_MODULAR_ENGINE] = {
		{RESOURCE_MOTOR, -2},
		{RESOURCE_RUBBER, -15},
		{RESOURCE_SMART_PLATING, -2},
		{RESOURCE_MODULAR_ENGINE, 1},
		{RESOURCE_POWER, -POWER_MANUFACTURER}
	};
	recipes[RECIPE_ADAPTIVE_CONTROL_UNIT] = {
		{RESOURCE_AUTOMATED_WIRING, -7.5},
		{RESOURCE_CIRCUIT_BOARD, -5},
		{RESOURCE_HEAVY_MODULAR_FRAME, -1},
		{RESOURCE_COMPUTER, -1},
		{RESOURCE_ADAPTIVE_CONTROL_UNIT, 1},
		{RESOURCE_POWER, -POWER_MANUFACTURER}
	};
	recipes[RECIPE_RIGOUR_MOTOR] = {
		{RESOURCE_ROTOR, -3.75},
		{RESOURCE_STATOR, -3.75},
		{RESOURCE_CRYSTAL_OSCILLATOR, -1.25},
		{RESOURCE_MOTOR, 7.5},
		{RESOURCE_POWER, -POWER_MANUFACTURER}
	};
	recipes[RECIPE_TURBO_MOTOR] = {
		{RESOURCE_HEAT_SINK, -7.5},
		{RESOURCE_RADIO_CONTROL_UNIT, -3.75},
		{RESOURCE_MOTOR, -7.5},
		{RESOURCE_RUBBER, -45},
		{RESOURCE_TURBO_MOTOR, 1.875},
		{RESOURCE_POWER, -POWER_MANUFACTURER}
	};
	recipes[RECIPE_TURBO_RIGOUR_MOTOR] = {
		{RESOURCE_RADIO_CONTROL_UNIT, -4.6875},
		{RESOURCE_MOTOR, -6.5625},
		{RESOURCE_AI_LIMITER, -8.4375},
		{RESOURCE_STATOR, -6.5625},
		{RESOURCE_TURBO_MOTOR, 2.8125},
		{RESOURCE_POWER, -POWER_MANUFACTURER}
	};
	recipes[RECIPE_NUCLEAR_FUEL_ROD] = {
		{RESOURCE_ENCASED_URANIUM_CELL, -10},
		{RESOURCE_ENCASED_INDUSTRIAL_BEAM, -1.2},
		{RESOURCE_ELECTROMAGNETIC_CONTROL_ROD, -2},
		{RESOURCE_NUCLEAR_FUEL_ROD, 0.4},
		{RESOURCE_POWER, -POWER_MANUFACTURER}
	};
	recipes[RECIPE_NUCLEAR_FUEL_UNIT] = {
		{RESOURCE_ENCASED_URANIUM_CELL, -10},
		{RESOURCE_ELECTROMAGNETIC_CONTROL_ROD, -2},
		{RESOURCE_CRYSTAL_OSCILLATOR, -0.6},
		{RESOURCE_BEACON, -1.2},
		{RESOURCE_NUCLEAR_FUEL_ROD, 0.6},
		{RESOURCE_POWER, -POWER_MANUFACTURER}
	};
	recipes[RECIPE_INFUSED_URANIUM_CELL] = {
		{RESOURCE_URANIUM_PELLET, -20},
		{RESOURCE_SULFUR, -22.5},
		{RESOURCE_SILICA, -22.5},
		{RESOURCE_QUICKWIRE, -37.5},
		{RESOURCE_ENCASED_URANIUM_CELL, 17.5},
		{RESOURCE_POWER, -POWER_MANUFACTURER}
	};
	
	recipes[RECIPE_STEAMED_COPPER_SHEET] = {
		{RESOURCE_COPPER_INGOT, -22.5},
		{RESOURCE_WATER, -22.5},
		{RESOURCE_COPPER_SHEET, 22.5},
		{RESOURCE_POWER, -POWER_REFINERY}
	};
	recipes[RECIPE_PURE_CATERIUM_INGOT] = {
		{RESOURCE_CATERIUM_ORE, -24},
		{RESOURCE_WATER, -24},
		{RESOURCE_CATERIUM_INGOT, 12},
		{RESOURCE_POWER, -POWER_REFINERY}
	};
	recipes[RECIPE_PURE_IRON_INGOT] = {
		{RESOURCE_IRON_ORE, -35},
		{RESOURCE_WATER, -20},
		{RESOURCE_IRON_INGOT, 65},
		{RESOURCE_POWER, -POWER_REFINERY}
	};
	recipes[RECIPE_PURE_COPPER_INGOT] = {
		{RESOURCE_COPPER_ORE, -15},
		{RESOURCE_WATER, -10},
		{RESOURCE_COPPER_INGOT, 37.5},
		{RESOURCE_POWER, -POWER_REFINERY}
	};
	recipes[RECIPE_WET_CONCRETE] = {
		{RESOURCE_LIMESTONE, -120},
		{RESOURCE_WATER, -100},
		{RESOURCE_CONCRETE, 80},
		{RESOURCE_POWER, -POWER_REFINERY}
	};
	recipes[RECIPE_PURE_QUARTZ_CRYSTAL] = {
		{RESOURCE_RAW_QUARTZ, -67.5},
		{RESOURCE_WATER, -37.5},
		{RESOURCE_QUARTZ_CRYSTAL, 52.5},
		{RESOURCE_POWER, -POWER_REFINERY}
	};
	recipes[RECIPE_ALUMINUM_SCRAP] = {
		{RESOURCE_ALUMINA_SOLUTION, -240},
		{RESOURCE_PETROLEUM_COKE, -60},
		{RESOURCE_ALUMINUM_SCRAP, 360},
		{RESOURCE_WATER, 60},
		{RESOURCE_POWER, -POWER_REFINERY}
	};
	recipes[RECIPE_ALUMINA_SOLUTION] = {
		{RESOURCE_BAUXITE, -70},
		{RESOURCE_WATER, -100},
		{RESOURCE_ALUMINA_SOLUTION, 80},
		{RESOURCE_SILICA, 20},
		{RESOURCE_POWER, -POWER_REFINERY}
	};
	recipes[RECIPE_ELECTRODE_ALUMINUM_SCRAP] = {
		{RESOURCE_ALUMINA_SOLUTION, -90},
		{RESOURCE_COAL, -30},
		{RESOURCE_ALUMINUM_SCRAP, 150},
		{RESOURCE_WATER, 30},
		{RESOURCE_POWER, -POWER_REFINERY}
	};
	recipes[RECIPE_URANIUM_PELLET] = {
		{RESOURCE_URANIUM, -50},
		{RESOURCE_SULFURIC_ACID, -60},
		{RESOURCE_URANIUM_PELLET, 50},
		{RESOURCE_POWER, -POWER_REFINERY}
	};
	recipes[RECIPE_SULFURIC_ACID] = {
		{RESOURCE_SULFUR, -50},
		{RESOURCE_WATER, -50},
		{RESOURCE_SULFURIC_ACID, 100},
		{RESOURCE_POWER, -POWER_REFINERY}
	};
	recipes[RECIPE_PLASTIC] = {
		{RESOURCE_CRUDE_OIL, -30},
		{RESOURCE_PLASTIC, 20},
		{RESOURCE_HEAVY_OIL_RESIDUE, 10},
		{RESOURCE_POWER, -POWER_REFINERY}
	};
	recipes[RECIPE_RUBBER] = {
		{RESOURCE_CRUDE_OIL, -30},
		{RESOURCE_RUBBER, 20},
		{RESOURCE_HEAVY_OIL_RESIDUE, 20},
		{RESOURCE_POWER, -POWER_REFINERY}
	};
	recipes[RECIPE_PETROLEUM_COKE] = {
		{RESOURCE_HEAVY_OIL_RESIDUE, -40},
		{RESOURCE_PETROLEUM_COKE, 120},
		{RESOURCE_POWER, -POWER_REFINERY}
	};
	recipes[RECIPE_RESIDUAL_PLASTIC] = {
		{RESOURCE_POLYMER_RESIN, -60},
		{RESOURCE_WATER, -20},
		{RESOURCE_PLASTIC, 20},
		{RESOURCE_POWER, -POWER_REFINERY}
	};
	recipes[RECIPE_RESIDUAL_RUBBER] = {
		{RESOURCE_POLYMER_RESIN, -40},
		{RESOURCE_WATER, -40},
		{RESOURCE_RUBBER, 20},
		{RESOURCE_POWER, -POWER_REFINERY}
	};
	recipes[RECIPE_RECYCLED_RUBBER] = {
		{RESOURCE_PLASTIC, -30},
		{RESOURCE_FUEL, -30},
		{RESOURCE_RUBBER, 60},
		{RESOURCE_POWER, -POWER_REFINERY}
	};
	recipes[RECIPE_RECYCLED_PLASTIC] = {
		{RESOURCE_RUBBER, -30},
		{RESOURCE_FUEL, -30},
		{RESOURCE_PLASTIC, 60},
		{RESOURCE_POWER, -POWER_REFINERY}
	};
	recipes[RECIPE_POLYMER_RESIN] = {
		{RESOURCE_CRUDE_OIL, -60},
		{RESOURCE_POLYMER_RESIN, 130},
		{RESOURCE_HEAVY_OIL_RESIDUE, 20},
		{RESOURCE_POWER, -POWER_REFINERY}
	};
	recipes[RECIPE_FUEL] = {
		{RESOURCE_CRUDE_OIL, -60},
		{RESOURCE_FUEL, 40},
		{RESOURCE_POLYMER_RESIN, 30},
		{RESOURCE_POWER, -POWER_REFINERY}
	};
	recipes[RECIPE_RESIDUAL_FUEL] = {
		{RESOURCE_HEAVY_OIL_RESIDUE, -60},
		{RESOURCE_FUEL, 40},
		{RESOURCE_POWER, -POWER_REFINERY}
	};
	recipes[RECIPE_TURBO_HEAVY_FUEL] = {
		{RESOURCE_HEAVY_OIL_RESIDUE, -37.5},
		{RESOURCE_COMPACTED_COAL, -30},
		{RESOURCE_TURBOFUEL, 30},
		{RESOURCE_POWER, -POWER_REFINERY}
	};
	recipes[RECIPE_TURBOFUEL] = {
		{RESOURCE_FUEL, -22.5},
		{RESOURCE_COMPACTED_COAL, -15},
		{RESOURCE_TURBOFUEL, 18.75},
		{RESOURCE_POWER, -POWER_REFINERY}
	};
	recipes[RECIPE_LIQUID_BIOFUEL] = {
		{RESOURCE_SOLID_BIOFUEL, -90},
		{RESOURCE_WATER, -45},
		{RESOURCE_LIQUID_BIOFUEL, 60},
		{RESOURCE_POWER, -POWER_REFINERY}
	};
	recipes[RECIPE_DILUTED_PACKAGED_FUEL] = {
		{RESOURCE_HEAVY_OIL_RESIDUE, -30},
		{RESOURCE_PACKAGED_WATER, -60},
		{RESOURCE_PACKAGED_FUEL, 60},
		{RESOURCE_POWER, -POWER_REFINERY}
	};
	recipes[RECIPE_COATED_CABLE] = {
		{RESOURCE_WIRE, -37.5},
		{RESOURCE_HEAVY_OIL_RESIDUE, -15},
		{RESOURCE_CABLE, 67.5},
		{RESOURCE_POWER, -POWER_REFINERY}
	};
	recipes[RECIPE_HEAVY_OIL_RESIDUE] = {
		{RESOURCE_CRUDE_OIL, -30},
		{RESOURCE_HEAVY_OIL_RESIDUE, 40},
		{RESOURCE_POLYMER_RESIN, 20},
		{RESOURCE_POWER, -POWER_REFINERY}
	};
	recipes[RECIPE_POLYESTER_FABRIC] = {
		{RESOURCE_POLYMER_RESIN, -80},
		{RESOURCE_WATER, -50},
		{RESOURCE_FABRIC, 5},
		{RESOURCE_POWER, -POWER_REFINERY}
	};

	recipes[RECIPE_PACKAGED_TURBOFUEL] = {
		{RESOURCE_TURBOFUEL, -20},
		{RESOURCE_EMPTY_CANISTER, -20},
		{RESOURCE_PACKAGED_TURBOFUEL, 20},
		{RESOURCE_POWER, -POWER_PACKAGER}
	};
	recipes[RECIPE_PACKAGED_WATER] = {
		{RESOURCE_WATER, -60},
		{RESOURCE_EMPTY_CANISTER, -60},
		{RESOURCE_PACKAGED_WATER, 60},
		{RESOURCE_POWER, -POWER_PACKAGER}
	};
	recipes[RECIPE_PACKAGED_OIL] = {
		{RESOURCE_CRUDE_OIL, -30},
		{RESOURCE_EMPTY_CANISTER, -30},
		{RESOURCE_PACKAGED_OIL, 30},
		{RESOURCE_POWER, -POWER_PACKAGER}
	};
	recipes[RECIPE_PACKAGED_FUEL] = {
		{RESOURCE_FUEL, -40},
		{RESOURCE_EMPTY_CANISTER, -40},
		{RESOURCE_PACKAGED_FUEL, 40},
		{RESOURCE_POWER, -POWER_PACKAGER}
	};
	recipes[RECIPE_PACKAGED_HEAVY_OIL_RESIDUE] = {
		{RESOURCE_HEAVY_OIL_RESIDUE, -30},
		{RESOURCE_EMPTY_CANISTER, -30},
		{RESOURCE_PACKAGED_HEAVY_OIL_RESIDUE, 30},
		{RESOURCE_POWER, -POWER_PACKAGER}
	};
	recipes[RECIPE_PACKAGED_LIQUID_BIOFUEL] = {
		{RESOURCE_LIQUID_BIOFUEL, -40},
		{RESOURCE_EMPTY_CANISTER, -40},
		{RESOURCE_PACKAGED_LIQUID_BIOFUEL, 40},
		{RESOURCE_POWER, -POWER_PACKAGER}
	};
	recipes[RECIPE_UNPACKAGE_TURBOFUEL] = {
		{RESOURCE_PACKAGED_TURBOFUEL, -20},
		{RESOURCE_TURBOFUEL, 20},
		{RESOURCE_EMPTY_CANISTER, 20},
		{RESOURCE_POWER, -POWER_PACKAGER}
	};
	recipes[RECIPE_UNPACKAGE_FUEL] = {
		{RESOURCE_PACKAGED_FUEL, -60},
		{RESOURCE_FUEL, 60},
		{RESOURCE_EMPTY_CANISTER, 60},
		{RESOURCE_POWER, -POWER_PACKAGER}
	};
	recipes[RECIPE_UNPACKAGE_LIQUID_BIOFUEL] = {
		{RESOURCE_PACKAGED_LIQUID_BIOFUEL, -60},
		{RESOURCE_LIQUID_BIOFUEL, 60},
		{RESOURCE_EMPTY_CANISTER, 60},
		{RESOURCE_POWER, -POWER_PACKAGER}
	};
	recipes[RECIPE_UNPACKAGE_WATER] = {
		{RESOURCE_PACKAGED_WATER, -120},
		{RESOURCE_WATER, 120},
		{RESOURCE_EMPTY_CANISTER, 120},
		{RESOURCE_POWER, -POWER_PACKAGER}
	};
	recipes[RECIPE_UNPACKAGE_OIL] = {
		{RESOURCE_PACKAGED_OIL, -60},
		{RESOURCE_CRUDE_OIL, 60},
		{RESOURCE_EMPTY_CANISTER, 60},
		{RESOURCE_POWER, -POWER_PACKAGER}
	};
	recipes[RECIPE_UNPACKAGE_HEAVY_OIL_RESIDUE] = {
		{RESOURCE_PACKAGED_HEAVY_OIL_RESIDUE, -20},
		{RESOURCE_HEAVY_OIL_RESIDUE, 20},
		{RESOURCE_EMPTY_CANISTER, 20},
		{RESOURCE_POWER, -POWER_PACKAGER}
	};

	recipes[RECIPE_POWER_COAL_GENERATOR_COAL] = {
		{RESOURCE_COAL, -15},
		{RESOURCE_WATER, -45},
		{RESOURCE_POWER, 75}
	};
	recipes[RECIPE_POWER_COAL_GENERATOR_COMPACTED_COAL] = {
		{RESOURCE_COMPACTED_COAL, -60.0/8.4},
		{RESOURCE_WATER, -45},
		{RESOURCE_POWER, 75}
	};
	recipes[RECIPE_POWER_COAL_GENERATOR_PETROLEUM_COKE] = {
		{RESOURCE_PETROLEUM_COKE, -25},
		{RESOURCE_WATER, -45},
		{RESOURCE_POWER, 75}
	};
	recipes[RECIPE_POWER_FUEL_GENERATOR_FUEL] = {
		{RESOURCE_FUEL, -15},
		{RESOURCE_POWER, 150}
	};
	recipes[RECIPE_POWER_FUEL_GENERATOR_LIQUID_BIOFUEL] = {
		{RESOURCE_LIQUID_BIOFUEL, -12},
		{RESOURCE_POWER, 150}
	};
	recipes[RECIPE_POWER_FUEL_GENERATOR_TURBOFUEL] = {
		{RESOURCE_TURBOFUEL, -4.5},
		{RESOURCE_POWER, 150}
	};
	recipes[RECIPE_POWER_NUCLEAR_POWER_PLANT] = {
		{RESOURCE_NUCLEAR_FUEL_ROD, -0.2},
		{RESOURCE_WATER, -300},
		{RESOURCE_POWER, 2500}
	};
	recipes[RECIPE_POWER_GEOTHERMAL_GENERATOR] = {
		{RESOURCE_POWER, 200}
	};
	
	recipes[RECIPE_AWESOME_SINK] = {
		{RESOURCE_POWER, -30}
	};
	
	return recipes;
}

std::map<RecipeName,float> worldLimits()
{
	std::map<RecipeName,float> limits = {
		{RECIPE_SOURCE_LIMESTONE_IMPURE, 12},
		{RECIPE_SOURCE_LIMESTONE_NORMAL, 47},
		{RECIPE_SOURCE_LIMESTONE_PURE, 27},
		{RECIPE_SOURCE_IRON_IMPURE, 33},
		{RECIPE_SOURCE_IRON_NORMAL, 41},
		{RECIPE_SOURCE_IRON_PURE, 46},
		{RECIPE_SOURCE_COPPER_IMPURE, 9},
		{RECIPE_SOURCE_COPPER_NORMAL, 28},
		{RECIPE_SOURCE_COPPER_PURE, 12},
		{RECIPE_SOURCE_CATERIUM_IMPURE, 0},
		{RECIPE_SOURCE_CATERIUM_NORMAL, 8},
		{RECIPE_SOURCE_CATERIUM_PURE, 8},
		{RECIPE_SOURCE_COAL_IMPURE, 6},
		{RECIPE_SOURCE_COAL_NORMAL, 29},
		{RECIPE_SOURCE_COAL_PURE, 15},
		{RECIPE_SOURCE_OIL_IMPURE, 10},
		{RECIPE_SOURCE_OIL_NORMAL, 12},
		{RECIPE_SOURCE_OIL_PURE, 8},
		{RECIPE_SOURCE_SULFUR_IMPURE, 1},
		{RECIPE_SOURCE_SULFUR_NORMAL, 7},
		{RECIPE_SOURCE_SULFUR_PURE, 3},
		{RECIPE_SOURCE_BAUXITE_IMPURE, 3},
		{RECIPE_SOURCE_BAUXITE_NORMAL, 5},
		{RECIPE_SOURCE_BAUXITE_PURE, 5},
		{RECIPE_SOURCE_QUARTZ_IMPURE, 0},
		{RECIPE_SOURCE_QUARTZ_NORMAL, 11},
		{RECIPE_SOURCE_QUARTZ_PURE, 5},
		{RECIPE_SOURCE_URANIUM_IMPURE, 0},
		{RECIPE_SOURCE_URANIUM_NORMAL, 3},
		{RECIPE_SOURCE_URANIUM_PURE, 0},
		{RECIPE_POWER_GEOTHERMAL_GENERATOR, 18}
	};
	
	return limits;
}

#endif //_RECIPEDEFINITION_HPP_