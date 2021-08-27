#ifndef _RESOURCENAME_HPP_
#define _RESOURCENAME_HPP_

#include <string>

enum ResourceName
{
	RESOURCE_ADAPTIVE_CONTROL_UNIT,
	RESOURCE_AI_LIMITER,
	RESOURCE_ALCLAD_ALUMINUM_SHEET,
	RESOURCE_ALUMINA_SOLUTION,
	RESOURCE_ALUMINUM_CASING,
	RESOURCE_ALUMINUM_INGOT,
	RESOURCE_ALUMINUM_SCRAP,
	RESOURCE_ASSEMBLY_DIRECTOR_SYSTEM,
	RESOURCE_AUTOMATED_WIRING,
	RESOURCE_BATTERY,
	RESOURCE_BAUXITE,
	RESOURCE_BEACON,
	RESOURCE_BIOMASS,
	RESOURCE_BLACK_POWDER,
	RESOURCE_CABLE,
	RESOURCE_CATERIUM_INGOT,
	RESOURCE_CATERIUM_ORE,
	RESOURCE_CIRCUIT_BOARD,
	RESOURCE_COAL,
	RESOURCE_COLOR_CARTRIDGE,
	RESOURCE_COMPACTED_COAL,
	RESOURCE_COMPUTER,
	RESOURCE_CONCRETE,
	RESOURCE_COOLING_SYSTEM,
	RESOURCE_COPPER_INGOT,
	RESOURCE_COPPER_ORE,
	RESOURCE_COPPER_POWDER,
	RESOURCE_COPPER_SHEET,
	RESOURCE_CRUDE_OIL,
	RESOURCE_CRYSTAL_OSCILLATOR,
	RESOURCE_ELECTROMAGNETIC_CONTROL_ROD,
	RESOURCE_EMPTY_CANISTER,
	RESOURCE_EMPTY_FLUID_TANK,
	RESOURCE_ENCASED_INDUSTRIAL_BEAM,
	RESOURCE_ENCASED_PLUTONIUM_CELL,
	RESOURCE_ENCASED_URANIUM_CELL,
	RESOURCE_FABRIC,
	RESOURCE_FLOWER_PETALS,
	RESOURCE_FUEL,
	RESOURCE_FUSED_MODULAR_FRAME,
	RESOURCE_GAS_FILTER,
	RESOURCE_HEAT_SINK,
	RESOURCE_HEAVY_MODULAR_FRAME,
	RESOURCE_HEAVY_OIL_RESIDUE,
	RESOURCE_HIGH_SPEED_CONNECTOR,
	RESOURCE_IODINE_INFUSED_FILTER,
	RESOURCE_IRON_INGOT,
	RESOURCE_IRON_ORE,
	RESOURCE_IRON_PLATE,
	RESOURCE_IRON_ROD,
	RESOURCE_LEAVES,
	RESOURCE_LIMESTONE,
	RESOURCE_LIQUID_BIOFUEL,
	RESOURCE_MAGNETIC_FIELD_GENERATOR,
	RESOURCE_MODULAR_ENGINE,
	RESOURCE_MODULAR_FRAME,
	RESOURCE_MOTOR,
	RESOURCE_MYCELIA,
	RESOURCE_NITRIC_ACID,
	RESOURCE_NITROGEN_GAS,
	RESOURCE_NOBELISK,
	RESOURCE_NON_FISSILE_URANIUM,
	RESOURCE_URANIUM_FUEL_ROD,
	RESOURCE_NUCLEAR_PASTA,
	RESOURCE_PACKAGED_ALUMINA_SOLUTION,
	RESOURCE_PACKAGED_FUEL,
	RESOURCE_PACKAGED_HEAVY_OIL_RESIDUE,
	RESOURCE_PACKAGED_LIQUID_BIOFUEL,
	RESOURCE_PACKAGED_NITRIC_ACID,
	RESOURCE_PACKAGED_NITROGEN_GAS,
	RESOURCE_PACKAGED_OIL,
	RESOURCE_PACKAGED_SULFURIC_ACID,
	RESOURCE_PACKAGED_TURBOFUEL,
	RESOURCE_PACKAGED_WATER,
	RESOURCE_PETROLEUM_COKE,
	RESOURCE_PLASTIC,
	RESOURCE_PLUTONIUM_FUEL_ROD,
	RESOURCE_PLUTONIUM_PELLET,
	RESOURCE_PLUTONIUM_WASTE,
	RESOURCE_POLYMER_RESIN,
	RESOURCE_PORTABLE_MINER,
	RESOURCE_PRESSURE_CONVERSION_CUBE,
	RESOURCE_QUARTZ_CRYSTAL,
	RESOURCE_QUICKWIRE,
	RESOURCE_RADIO_CONTROL_UNIT,
	RESOURCE_RAW_QUARTZ,
	RESOURCE_REINFORCED_IRON_PLATE,
	RESOURCE_RIFLE_CARTRIDGE,
	RESOURCE_ROTOR,
	RESOURCE_RUBBER,
	RESOURCE_SCREW,
	RESOURCE_SILICA,
	RESOURCE_SMART_PLATING,
	RESOURCE_SOLID_BIOFUEL,
	RESOURCE_SPIKED_REBAR,
	RESOURCE_STATOR,
	RESOURCE_STEEL_BEAM,
	RESOURCE_STEEL_INGOT,
	RESOURCE_STEEL_PIPE,
	RESOURCE_SULFUR,
	RESOURCE_SULFURIC_ACID,
	RESOURCE_SUPERCOMPUTER,
	RESOURCE_THERMAL_PROPULSION_ROCKET,
	RESOURCE_TURBO_MOTOR,
	RESOURCE_TURBOFUEL,
	RESOURCE_URANIUM_WASTE,
	RESOURCE_URANIUM,
	RESOURCE_VERSATILE_FRAMEWORK,
	RESOURCE_WATER,
	RESOURCE_WIRE,
	RESOURCE_WOOD,

	RESOURCE_POWER,

	RESOURCE_SIZE
};

// %s%\t\(.*\),%\tcase \1: return "\1";%g
std::string resourceToString(ResourceName name)
{
	switch(name)
	{
		case RESOURCE_LIMESTONE: return "RESOURCE_LIMESTONE";
		case RESOURCE_IRON_ORE: return "RESOURCE_IRON_ORE";
		case RESOURCE_COPPER_ORE: return "RESOURCE_COPPER_ORE";
		case RESOURCE_CATERIUM_ORE: return "RESOURCE_CATERIUM_ORE";
		case RESOURCE_COAL: return "RESOURCE_COAL";
		case RESOURCE_RAW_QUARTZ: return "RESOURCE_RAW_QUARTZ";
		case RESOURCE_SULFUR: return "RESOURCE_SULFUR";
		case RESOURCE_BAUXITE: return "RESOURCE_BAUXITE";
		case RESOURCE_URANIUM: return "RESOURCE_URANIUM";
		
		case RESOURCE_WATER: return "RESOURCE_WATER";
		case RESOURCE_CRUDE_OIL: return "RESOURCE_CRUDE_OIL";
		case RESOURCE_HEAVY_OIL_RESIDUE: return "RESOURCE_HEAVY_OIL_RESIDUE";
		case RESOURCE_FUEL: return "RESOURCE_FUEL";
		case RESOURCE_LIQUID_BIOFUEL: return "RESOURCE_LIQUID_BIOFUEL";
		case RESOURCE_TURBOFUEL: return "RESOURCE_TURBOFUEL";
		case RESOURCE_ALUMINA_SOLUTION: return "RESOURCE_ALUMINA_SOLUTION";
		case RESOURCE_SULFURIC_ACID: return "RESOURCE_SULFURIC_ACID";
		
		case RESOURCE_CONCRETE: return "RESOURCE_CONCRETE";
		case RESOURCE_IRON_INGOT: return "RESOURCE_IRON_INGOT";
		case RESOURCE_COPPER_INGOT: return "RESOURCE_COPPER_INGOT";
		case RESOURCE_CATERIUM_INGOT: return "RESOURCE_CATERIUM_INGOT";
		case RESOURCE_STEEL_INGOT: return "RESOURCE_STEEL_INGOT";
		case RESOURCE_ALUMINUM_INGOT: return "RESOURCE_ALUMINUM_INGOT";
		case RESOURCE_QUARTZ_CRYSTAL: return "RESOURCE_QUARTZ_CRYSTAL";
		case RESOURCE_POLYMER_RESIN: return "RESOURCE_POLYMER_RESIN";
		case RESOURCE_PETROLEUM_COKE: return "RESOURCE_PETROLEUM_COKE";
		case RESOURCE_ALUMINUM_SCRAP: return "RESOURCE_ALUMINUM_SCRAP";
		case RESOURCE_SILICA: return "RESOURCE_SILICA";
		case RESOURCE_BLACK_POWDER: return "RESOURCE_BLACK_POWDER";
		case RESOURCE_WIRE: return "RESOURCE_WIRE";
		case RESOURCE_CABLE: return "RESOURCE_CABLE";
		case RESOURCE_IRON_ROD: return "RESOURCE_IRON_ROD";
		case RESOURCE_SCREW: return "RESOURCE_SCREW";
		case RESOURCE_IRON_PLATE: return "RESOURCE_IRON_PLATE";
		case RESOURCE_REINFORCED_IRON_PLATE: return "RESOURCE_REINFORCED_IRON_PLATE";
		case RESOURCE_COPPER_SHEET: return "RESOURCE_COPPER_SHEET";
		case RESOURCE_ALCLAD_ALUMINUM_SHEET: return "RESOURCE_ALCLAD_ALUMINUM_SHEET";
		case RESOURCE_PLASTIC: return "RESOURCE_PLASTIC";
		case RESOURCE_RUBBER: return "RESOURCE_RUBBER";
		case RESOURCE_PACKAGED_WATER: return "RESOURCE_PACKAGED_WATER";
		case RESOURCE_STEEL_PIPE: return "RESOURCE_STEEL_PIPE";
		case RESOURCE_STEEL_BEAM: return "RESOURCE_STEEL_BEAM";
		case RESOURCE_ENCASED_INDUSTRIAL_BEAM: return "RESOURCE_ENCASED_INDUSTRIAL_BEAM";
		case RESOURCE_FLOWER_PETALS: return "RESOURCE_FLOWER_PETALS";
		
		case RESOURCE_CRYSTAL_OSCILLATOR: return "RESOURCE_CRYSTAL_OSCILLATOR";
		case RESOURCE_EMPTY_CANISTER: return "RESOURCE_EMPTY_CANISTER";
		case RESOURCE_FABRIC: return "RESOURCE_FABRIC";
		case RESOURCE_MODULAR_FRAME: return "RESOURCE_MODULAR_FRAME";
		case RESOURCE_HEAVY_MODULAR_FRAME: return "RESOURCE_HEAVY_MODULAR_FRAME";
		case RESOURCE_ROTOR: return "RESOURCE_ROTOR";
		case RESOURCE_STATOR: return "RESOURCE_STATOR";
		case RESOURCE_MOTOR: return "RESOURCE_MOTOR";
		case RESOURCE_QUICKWIRE: return "RESOURCE_QUICKWIRE";
		case RESOURCE_CIRCUIT_BOARD: return "RESOURCE_CIRCUIT_BOARD";
		case RESOURCE_COMPUTER: return "RESOURCE_COMPUTER";
		case RESOURCE_AI_LIMITER: return "RESOURCE_AI_LIMITER";
		case RESOURCE_HIGH_SPEED_CONNECTOR: return "RESOURCE_HIGH_SPEED_CONNECTOR";
		case RESOURCE_SUPERCOMPUTER: return "RESOURCE_SUPERCOMPUTER";
		case RESOURCE_BATTERY: return "RESOURCE_BATTERY";
		case RESOURCE_HEAT_SINK: return "RESOURCE_HEAT_SINK";
		case RESOURCE_RADIO_CONTROL_UNIT: return "RESOURCE_RADIO_CONTROL_UNIT";
		case RESOURCE_TURBO_MOTOR: return "RESOURCE_TURBO_MOTOR";
		case RESOURCE_ELECTROMAGNETIC_CONTROL_ROD: return "RESOURCE_ELECTROMAGNETIC_CONTROL_ROD";
		case RESOURCE_ENCASED_URANIUM_CELL: return "RESOURCE_ENCASED_URANIUM_CELL";
		case RESOURCE_BEACON: return "RESOURCE_BEACON";
		
		case RESOURCE_COMPACTED_COAL: return "RESOURCE_COMPACTED_COAL";
		case RESOURCE_LEAVES: return "RESOURCE_LEAVES";
		case RESOURCE_MYCELIA: return "RESOURCE_MYCELIA";
		case RESOURCE_WOOD: return "RESOURCE_WOOD";
		case RESOURCE_BIOMASS: return "RESOURCE_BIOMASS";
		case RESOURCE_PACKAGED_OIL: return "RESOURCE_PACKAGED_OIL";
		case RESOURCE_PACKAGED_HEAVY_OIL_RESIDUE: return "RESOURCE_PACKAGED_HEAVY_OIL_RESIDUE";
		case RESOURCE_SOLID_BIOFUEL: return "RESOURCE_SOLID_BIOFUEL";
		case RESOURCE_PACKAGED_FUEL: return "RESOURCE_PACKAGED_FUEL";
		case RESOURCE_PACKAGED_LIQUID_BIOFUEL: return "RESOURCE_PACKAGED_LIQUID_BIOFUEL";
		case RESOURCE_PACKAGED_TURBOFUEL: return "RESOURCE_PACKAGED_TURBOFUEL";
		case RESOURCE_URANIUM_FUEL_ROD: return "RESOURCE_URANIUM_FUEL_ROD";
		
		case RESOURCE_NOBELISK: return "RESOURCE_NOBELISK";
		case RESOURCE_GAS_FILTER: return "RESOURCE_GAS_FILTER";
		case RESOURCE_COLOR_CARTRIDGE: return "RESOURCE_COLOR_CARTRIDGE";
		case RESOURCE_RIFLE_CARTRIDGE: return "RESOURCE_RIFLE_CARTRIDGE";
		case RESOURCE_SPIKED_REBAR: return "RESOURCE_SPIKED_REBAR";
		case RESOURCE_IODINE_INFUSED_FILTER: return "RESOURCE_IODINE_INFUSED_FILTER";
		
		case RESOURCE_SMART_PLATING: return "RESOURCE_SMART_PLATING";
		case RESOURCE_VERSATILE_FRAMEWORK: return "RESOURCE_VERSATILE_FRAMEWORK";
		case RESOURCE_AUTOMATED_WIRING: return "RESOURCE_AUTOMATED_WIRING";
		case RESOURCE_MODULAR_ENGINE: return "RESOURCE_MODULAR_ENGINE";
		case RESOURCE_ADAPTIVE_CONTROL_UNIT: return "RESOURCE_ADAPTIVE_CONTROL_UNIT";
		
		case RESOURCE_COPPER_POWDER: return "RESOURCE_COPPER_POWDER";
		case RESOURCE_PACKAGED_SULFURIC_ACID: return "RESOURCE_PACKAGED_SULFURIC_ACID";
		case RESOURCE_PACKAGED_ALUMINA_SOLUTION: return "RESOURCE_PACKAGED_ALUMINA_SOLUTION";
		case RESOURCE_EMPTY_FLUID_TANK: return "RESOURCE_EMPTY_FLUID_TANK";
		case RESOURCE_PACKAGED_NITROGEN_GAS: return "RESOURCE_PACKAGED_NITROGEN_GAS";
		case RESOURCE_ALUMINUM_CASING: return "RESOURCE_ALUMINUM_CASING";
		case RESOURCE_PACKAGED_NITRIC_ACID: return "RESOURCE_PACKAGED_NITRIC_ACID";
		case RESOURCE_COOLING_SYSTEM: return "RESOURCE_COOLING_SYSTEM";
		case RESOURCE_MAGNETIC_FIELD_GENERATOR: return "RESOURCE_MAGNETIC_FIELD_GENERATOR";
		case RESOURCE_FUSED_MODULAR_FRAME: return "RESOURCE_FUSED_MODULAR_FRAME";
		case RESOURCE_PLUTONIUM_FUEL_ROD: return "RESOURCE_PLUTONIUM_FUEL_ROD";
		case RESOURCE_PRESSURE_CONVERSION_CUBE: return "RESOURCE_PRESSURE_CONVERSION_CUBE";
		case RESOURCE_NUCLEAR_PASTA: return "RESOURCE_NUCLEAR_PASTA";
		case RESOURCE_ASSEMBLY_DIRECTOR_SYSTEM: return "RESOURCE_ASSEMBLY_DIRECTOR_SYSTEM";
		case RESOURCE_THERMAL_PROPULSION_ROCKET: return "RESOURCE_THERMAL_PROPULSION_ROCKET";
		case RESOURCE_URANIUM_WASTE: return "RESOURCE_URANIUM_WASTE";
		case RESOURCE_PLUTONIUM_WASTE: return "RESOURCE_PLUTONIUM_WASTE";
		case RESOURCE_NON_FISSILE_URANIUM: return "RESOURCE_NON_FISSILE_URANIUM";
		case RESOURCE_PLUTONIUM_PELLET: return "RESOURCE_PLUTONIUM_PELLET";
		case RESOURCE_NITRIC_ACID: return "RESOURCE_NITRIC_ACID";
		case RESOURCE_ENCASED_PLUTONIUM_CELL: return "RESOURCE_ENCASED_PLUTONIUM_CELL";
		case RESOURCE_NITROGEN_GAS: return "RESOURCE_NITROGEN_GAS";
		case RESOURCE_PORTABLE_MINER: return "RESOURCE_PORTABLE_MINER";
		
		case RESOURCE_POWER: return "RESOURCE_POWER";
		
		default: return "RESOURCE_UNKNOWN_ERROR";
	}
}

std::string resourceToString(size_t name) {return resourceToString(ResourceName(name));}

float awesomeValue(ResourceName name)
{
	switch(name)
	{
		case RESOURCE_ADAPTIVE_CONTROL_UNIT: return 86120;
		case RESOURCE_AI_LIMITER: return 920;
		case RESOURCE_ALCLAD_ALUMINUM_SHEET: return 266;
		case RESOURCE_ALUMINUM_CASING: return 393;
		case RESOURCE_ALUMINUM_INGOT: return 131;
		case RESOURCE_ALUMINUM_SCRAP: return 27;
		case RESOURCE_ASSEMBLY_DIRECTOR_SYSTEM: return 543632;
		case RESOURCE_AUTOMATED_WIRING: return 1440;
		case RESOURCE_BATTERY: return 513;
		case RESOURCE_BAUXITE: return 8;
		case RESOURCE_BEACON: return 320;
		case RESOURCE_BIOMASS: return 12;
		case RESOURCE_BLACK_POWDER: return 50;
		case RESOURCE_CABLE: return 24;
		case RESOURCE_CATERIUM_INGOT: return 42;
		case RESOURCE_CATERIUM_ORE: return 7;
		case RESOURCE_CIRCUIT_BOARD: return 696;
		case RESOURCE_COAL: return 3;
		case RESOURCE_COLOR_CARTRIDGE: return 10;
		case RESOURCE_COMPACTED_COAL: return 28;
		case RESOURCE_COMPUTER: return 17260;
		case RESOURCE_CONCRETE: return 12;
		case RESOURCE_COOLING_SYSTEM: return 8811;
		case RESOURCE_COPPER_INGOT: return 6;
		case RESOURCE_COPPER_ORE: return 3;
		case RESOURCE_COPPER_POWDER: return 72;
		case RESOURCE_COPPER_SHEET: return 24;
		case RESOURCE_CRYSTAL_OSCILLATOR: return 3072;
		case RESOURCE_ELECTROMAGNETIC_CONTROL_ROD: return 2560;
		case RESOURCE_EMPTY_CANISTER: return 60;
		case RESOURCE_EMPTY_FLUID_TANK: return 225;
		case RESOURCE_ENCASED_INDUSTRIAL_BEAM: return 632;
		case RESOURCE_ENCASED_URANIUM_CELL: return 192;
		case RESOURCE_FABRIC: return 140;
		case RESOURCE_FLOWER_PETALS: return 10;
		case RESOURCE_FUSED_MODULAR_FRAME: return 62840;
		case RESOURCE_GAS_FILTER: return 830;
		case RESOURCE_HEAT_SINK: return 2344;
		case RESOURCE_HEAVY_MODULAR_FRAME: return 11520;
		case RESOURCE_HIGH_SPEED_CONNECTOR: return 3776;
		case RESOURCE_IODINE_INFUSED_FILTER: return 2718;
		case RESOURCE_IRON_INGOT: return 2;
		case RESOURCE_IRON_ORE: return 1;
		case RESOURCE_IRON_PLATE: return 6;
		case RESOURCE_IRON_ROD: return 4;
		case RESOURCE_LEAVES: return 3;
		case RESOURCE_LIMESTONE: return 2;
		case RESOURCE_MAGNETIC_FIELD_GENERATOR: return 16130;
		case RESOURCE_MODULAR_ENGINE: return 9960;
		case RESOURCE_MODULAR_FRAME: return 408;
		case RESOURCE_MOTOR: return 1520;
		case RESOURCE_MYCELIA: return 10;
		case RESOURCE_NOBELISK: return 980;
		case RESOURCE_URANIUM_FUEL_ROD: return 48592;
		case RESOURCE_NUCLEAR_PASTA: return 518272;
		case RESOURCE_PACKAGED_ALUMINA_SOLUTION: return 160;
		case RESOURCE_PACKAGED_FUEL: return 270;
		case RESOURCE_PACKAGED_HEAVY_OIL_RESIDUE: return 180;
		case RESOURCE_PACKAGED_LIQUID_BIOFUEL: return 370;
		case RESOURCE_PACKAGED_NITRIC_ACID: return 412;
		case RESOURCE_PACKAGED_NITROGEN_GAS: return 308;
		case RESOURCE_PACKAGED_OIL: return 180;
		case RESOURCE_PACKAGED_SULFURIC_ACID: return 152;
		case RESOURCE_PACKAGED_TURBOFUEL: return 570;
		case RESOURCE_PACKAGED_WATER: return 130;
		case RESOURCE_PETROLEUM_COKE: return 20;
		case RESOURCE_PLASTIC: return 75;
		case RESOURCE_PLUTONIUM_FUEL_ROD: return 129620;
		case RESOURCE_POLYMER_RESIN: return 12;
		case RESOURCE_PORTABLE_MINER: return 60;
		case RESOURCE_PRESSURE_CONVERSION_CUBE: return 244736;
		case RESOURCE_QUARTZ_CRYSTAL: return 50;
		case RESOURCE_QUICKWIRE: return 17;
		case RESOURCE_RADIO_CONTROL_UNIT: return 29764;
		case RESOURCE_RAW_QUARTZ: return 15;
		case RESOURCE_REINFORCED_IRON_PLATE: return 120;
		case RESOURCE_RIFLE_CARTRIDGE: return 664;
		case RESOURCE_ROTOR: return 140;
		case RESOURCE_RUBBER: return 60;
		case RESOURCE_SCREW: return 2;
		case RESOURCE_SILICA: return 20;
		case RESOURCE_SMART_PLATING: return 520;
		case RESOURCE_SOLID_BIOFUEL: return 48;
		case RESOURCE_SPIKED_REBAR: return 8;
		case RESOURCE_STATOR: return 240;
		case RESOURCE_STEEL_BEAM: return 64;
		case RESOURCE_STEEL_INGOT: return 8;
		case RESOURCE_STEEL_PIPE: return 24;
		case RESOURCE_SULFUR: return 11;
		case RESOURCE_SUPERCOMPUTER: return 99576;
		case RESOURCE_THERMAL_PROPULSION_ROCKET: return 637514;
		case RESOURCE_TURBO_MOTOR: return 204584;
		case RESOURCE_URANIUM: return 35;
		case RESOURCE_VERSATILE_FRAMEWORK: return 1176;
		case RESOURCE_WIRE: return 6;
		case RESOURCE_WOOD: return 30;
		
		case RESOURCE_POWER: return 0;
		
		default: return 0;
	}
}

float awesomeValue(size_t name) {return awesomeValue(ResourceName(name));}

#endif //_RESOURCENAME_HPP_