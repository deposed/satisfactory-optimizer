This project uses [linear programming](https://en.wikipedia.org/wiki/Linear_programming) (AKA linear optimization) to determine the maximum amount of AWESOME points per minute that you can achieve.

There is no room for subjective argument here, there is nearly 100 years of mathematical theory and practice backing up the fact that this method produces the singular optimal solution to the problem, given the following assumptions:

- No **Biomass Burners**. Everything must be fully automated.
- All production buildings clocked at 100%. Of course you could do better by having 100x the production buildings clocked at 1%, but ain't nobody got time for that.
- All **Oil Extractor**s, impure **Miner Mk.3**s, and normal **Miner Mk.3**s clocked at 250%. Pure **Miner Mk.3**s clocked at 163%.
- Nuclear power is optional. By default it is disallowed, you can use the -n switch to allow it.

In terms of linear programming, there's nothing particularly clever going on here. There is one variable for each production recipe indicating how many buildings are running it, constrained to be nonnegative. There is one constraint for each resource to ensure that the quantity produced minus the quantity consumed is nonnegative. Power is treated as a resource, and power generators are treated as recipes. There is one additional recipe (AWESOME sink) and one additional constraint to ensure that there are enough sinks running to grind up all excess resources produced. The objective to maximize is the total AWESOME value of all excess resources.

Google's [or-tools](https://developers.google.com/optimization) is used as the linear programming library. I had a terrible time getting it to work under Windows, but it was fairly easy to get working using the precompiled binaries for Ubuntu 20.04. After downloading or-tools to eg. /opt/or-tools/ and checking out satisfactory-optimizer to eg. /build/satisfactory-optimizer/, the steps to build and run are
~~~
cd /build/satisfactory-optimizer
mkdir build
cd build
cmake -Dortools_dir=/opt/or-tools/ ..
make
./optimizer
./optimizer -n
~~~
Results: without nuclear
~~~
recipe usage (buildings):
  RECIPE_SOURCE_LIMESTONE_NORMAL: 5.355
  RECIPE_SOURCE_LIMESTONE_PURE: 27.000
  RECIPE_SOURCE_IRON_IMPURE: 33.000
  RECIPE_SOURCE_IRON_NORMAL: 41.000
  RECIPE_SOURCE_IRON_PURE: 46.000
  RECIPE_SOURCE_COPPER_IMPURE: 9.000
  RECIPE_SOURCE_COPPER_NORMAL: 28.000
  RECIPE_SOURCE_COPPER_PURE: 12.000
  RECIPE_SOURCE_CATERIUM_NORMAL: 8.000
  RECIPE_SOURCE_CATERIUM_PURE: 8.000
  RECIPE_SOURCE_COAL_IMPURE: 6.000
  RECIPE_SOURCE_COAL_NORMAL: 29.000
  RECIPE_SOURCE_COAL_PURE: 15.000
  RECIPE_SOURCE_OIL_IMPURE: 10.000
  RECIPE_SOURCE_OIL_NORMAL: 12.000
  RECIPE_SOURCE_OIL_PURE: 8.000
  RECIPE_SOURCE_SULFUR_IMPURE: 1.000
  RECIPE_SOURCE_SULFUR_NORMAL: 7.000
  RECIPE_SOURCE_SULFUR_PURE: 3.000
  RECIPE_SOURCE_BAUXITE_IMPURE: 3.000
  RECIPE_SOURCE_BAUXITE_NORMAL: 5.000
  RECIPE_SOURCE_BAUXITE_PURE: 5.000
  RECIPE_SOURCE_QUARTZ_NORMAL: 11.000
  RECIPE_SOURCE_QUARTZ_PURE: 5.000
  RECIPE_SOURCE_URANIUM_NORMAL: 3.000
  RECIPE_SOURCE_WATER: 882.938
  RECIPE_IRON_INGOT: 528.358
  RECIPE_COPPER_ALLOY_INGOT: 577.200
  RECIPE_SOLID_STEEL_INGOT: 527.214
  RECIPE_ALUMINUM_INGOT: 61.905
  RECIPE_CASTED_SCREW: 764.440
  RECIPE_STEEL_PIPE: 1,029.028
  RECIPE_WIRE: 638.649
  RECIPE_CABLE: 1,805.601
  RECIPE_IRON_WIRE: 4,774.137
  RECIPE_STITCHED_IRON_PLATE: 243.841
  RECIPE_BOLTED_FRAME: 182.881
  RECIPE_ENCASED_INDUSTRIAL_PIPE: 285.751
  RECIPE_ALCLAD_ALUMINUM_SHEET: 82.540
  RECIPE_STEEL_COATED_PLATE: 101.601
  RECIPE_AI_LIMITER: 130.037
  RECIPE_FUSED_QUICKWIRE: 736.000
  RECIPE_CATERIUM_CIRCUIT_BOARD: 114.159
  RECIPE_SILICONE_CIRCUIT_BOARD: 373.160
  RECIPE_COPPER_ROTOR: 64.711
  RECIPE_STATOR: 227.436
  RECIPE_MOTOR: 72.800
  RECIPE_QUICKWIRE_STATOR: 315.823
  RECIPE_HEAT_EXCHANGER: 66.032
  RECIPE_AUTOMATED_WIRING: 1,028.705
  RECIPE_CHEAP_SILICA: 636.190
  RECIPE_COMPACTED_COAL: 273.600
  RECIPE_HIGH_SPEED_CONNECTOR: 72.874
  RECIPE_SUPERCOMPUTER: 48.583
  RECIPE_RADIO_CONTROL_SYSTEM: 69.333
  RECIPE_CATERIUM_COMPUTER: 140.023
  RECIPE_HEAVY_ENCASED_FRAME: 121.921
  RECIPE_ADAPTIVE_CONTROL_UNIT: 342.902
  RECIPE_TURBO_RIGOUR_MOTOR: 55.467
  RECIPE_STEAMED_COPPER_SHEET: 830.361
  RECIPE_PURE_CATERIUM_INGOT: 460.000
  RECIPE_PURE_IRON_INGOT: 1,145.693
  RECIPE_WET_CONCRETE: 102.871
  RECIPE_PURE_QUARTZ_CRYSTAL: 49.524
  RECIPE_ALUMINA_SOLUTION: 111.429
  RECIPE_ELECTRODE_ALUMINUM_SCRAP: 99.048
  RECIPE_RESIDUAL_RUBBER: 165.000
  RECIPE_RECYCLED_RUBBER: 116.530
  RECIPE_RECYCLED_PLASTIC: 133.024
  RECIPE_TURBOFUEL: 456.000
  RECIPE_DILUTED_PACKAGED_FUEL: 440.000
  RECIPE_HEAVY_OIL_RESIDUE: 330.000
  RECIPE_PACKAGED_WATER: 440.000
  RECIPE_UNPACKAGE_FUEL: 440.000
  RECIPE_POWER_FUEL_GENERATOR_FUEL: 576.892
  RECIPE_POWER_FUEL_GENERATOR_TURBOFUEL: 1,900.000
  RECIPE_POWER_GEOTHERMAL_GENERATOR: 18.000
  RECIPE_AWESOME_SINK: 2.953
resources sunk (per min):
  RESOURCE_URANIUM: 1,800.000
  RESOURCE_SUPERCOMPUTER: 4.426
  RESOURCE_TURBO_MOTOR: 156.000
  RESOURCE_ADAPTIVE_CONTROL_UNIT: 342.902
awesome points (per min): 102,583,141.674
~~~

Results: with nuclear
~~~
recipe usage (buildings):
  RECIPE_SOURCE_LIMESTONE_IMPURE: 12.000
  RECIPE_SOURCE_LIMESTONE_NORMAL: 47.000
  RECIPE_SOURCE_LIMESTONE_PURE: 27.000
  RECIPE_SOURCE_IRON_IMPURE: 33.000
  RECIPE_SOURCE_IRON_NORMAL: 41.000
  RECIPE_SOURCE_IRON_PURE: 46.000
  RECIPE_SOURCE_COPPER_IMPURE: 9.000
  RECIPE_SOURCE_COPPER_NORMAL: 28.000
  RECIPE_SOURCE_COPPER_PURE: 12.000
  RECIPE_SOURCE_CATERIUM_NORMAL: 8.000
  RECIPE_SOURCE_CATERIUM_PURE: 8.000
  RECIPE_SOURCE_COAL_IMPURE: 6.000
  RECIPE_SOURCE_COAL_NORMAL: 29.000
  RECIPE_SOURCE_COAL_PURE: 15.000
  RECIPE_SOURCE_OIL_IMPURE: 10.000
  RECIPE_SOURCE_OIL_NORMAL: 12.000
  RECIPE_SOURCE_OIL_PURE: 8.000
  RECIPE_SOURCE_SULFUR_IMPURE: 1.000
  RECIPE_SOURCE_SULFUR_NORMAL: 7.000
  RECIPE_SOURCE_SULFUR_PURE: 3.000
  RECIPE_SOURCE_BAUXITE_IMPURE: 3.000
  RECIPE_SOURCE_BAUXITE_NORMAL: 5.000
  RECIPE_SOURCE_BAUXITE_PURE: 5.000
  RECIPE_SOURCE_QUARTZ_NORMAL: 11.000
  RECIPE_SOURCE_QUARTZ_PURE: 5.000
  RECIPE_SOURCE_URANIUM_NORMAL: 3.000
  RECIPE_SOURCE_WATER: 3,314.419
  RECIPE_SOLID_STEEL_INGOT: 574.105
  RECIPE_COMPACTED_STEEL_INGOT: 441.279
  RECIPE_ALUMINUM_INGOT: 61.905
  RECIPE_COKE_STEEL_INGOT: 30.992
  RECIPE_SCREW: 220.090
  RECIPE_STEEL_PIPE: 1,318.276
  RECIPE_STEEL_ROD: 221.259
  RECIPE_CABLE: 1,976.483
  RECIPE_IRON_WIRE: 6,798.849
  RECIPE_MODULAR_FRAME: 545.980
  RECIPE_ENCASED_INDUSTRIAL_PIPE: 341.238
  RECIPE_ALCLAD_ALUMINUM_SHEET: 82.540
  RECIPE_ADHERED_IRON_PLATE: 436.784
  RECIPE_STEEL_COATED_PLATE: 1,585.340
  RECIPE_AI_LIMITER: 147.323
  RECIPE_FUSED_QUICKWIRE: 736.000
  RECIPE_CATERIUM_CIRCUIT_BOARD: 623.646
  RECIPE_INSULATED_CABLE: 23.424
  RECIPE_SILICONE_CIRCUIT_BOARD: 81.557
  RECIPE_ROTOR: 88.036
  RECIPE_STATOR: 793.137
  RECIPE_MOTOR: 22.686
  RECIPE_HEAT_EXCHANGER: 66.032
  RECIPE_AUTOMATED_WIRING: 1,228.455
  RECIPE_CHEAP_SILICA: 527.296
  RECIPE_COMPACTED_COAL: 198.575
  RECIPE_ENCASED_URANIUM_CELL: 27.320
  RECIPE_ELECTROMAGNETIC_CONNECTION_ROD: 17.840
  RECIPE_COATED_IRON_CANISTER: 2,203.513
  RECIPE_BEACON: 14.272
  RECIPE_SILICONE_HIGH_SPEED_CONNECTOR: 116.400
  RECIPE_SUPERCOMPUTER: 46.222
  RECIPE_RADIO_CONTROL_SYSTEM: 69.333
  RECIPE_INSULATED_CRYSTAL_OSCILLATOR: 50.817
  RECIPE_CATERIUM_COMPUTER: 155.418
  RECIPE_HEAVY_ENCASED_FRAME: 145.595
  RECIPE_ADAPTIVE_CONTROL_UNIT: 409.485
  RECIPE_RIGOUR_MOTOR: 33.409
  RECIPE_TURBO_RIGOUR_MOTOR: 55.467
  RECIPE_NUCLEAR_FUEL_UNIT: 89.201
  RECIPE_INFUSED_URANIUM_CELL: 35.361
  RECIPE_STEAMED_COPPER_SHEET: 1,897.460
  RECIPE_PURE_CATERIUM_INGOT: 460.000
  RECIPE_PURE_IRON_INGOT: 1,660.766
  RECIPE_PURE_COPPER_INGOT: 1,924.000
  RECIPE_WET_CONCRETE: 358.110
  RECIPE_PURE_QUARTZ_CRYSTAL: 67.673
  RECIPE_ALUMINA_SOLUTION: 111.429
  RECIPE_ELECTRODE_ALUMINUM_SCRAP: 99.048
  RECIPE_URANIUM_PELLET: 36.000
  RECIPE_SULFURIC_ACID: 21.600
  RECIPE_PETROLEUM_COKE: 19.370
  RECIPE_RESIDUAL_RUBBER: 165.000
  RECIPE_RECYCLED_RUBBER: 350.576
  RECIPE_RECYCLED_PLASTIC: 477.770
  RECIPE_DILUTED_PACKAGED_FUEL: 414.173
  RECIPE_HEAVY_OIL_RESIDUE: 330.000
  RECIPE_PACKAGED_WATER: 2,617.686
  RECIPE_UNPACKAGE_FUEL: 414.173
  RECIPE_POWER_NUCLEAR_POWER_PLANT: 267.603
  RECIPE_POWER_GEOTHERMAL_GENERATOR: 18.000
  RECIPE_AWESOME_SINK: 194.040
resources sunk (per min):
  RESOURCE_CONCRETE: 18,575.277
  RESOURCE_PACKAGED_WATER: 132,210.750
  RESOURCE_TURBO_MOTOR: 156.000
  RESOURCE_ADAPTIVE_CONTROL_UNIT: 409.485
awesome points (per min): 125,223,897.228
~~~

Interesting points:
- You can get the maximum theoretical **Turbo Motor** production (156) without nuclear power, as well as about 350 **Adaptive Control Unit**s. Nuclear power just lets you get about 50 more **Adaptive Control Unit**s, and a bunch of **Concrete** and **Packaged Water**.
- Pure ingot recipes are used throughout, excepting **Pure Aluminum Ingot** which is of course terrible and shouldn't be used by anyone ever. The non-nuclear solution doesn't have enough power to exclusively use the pure recipes, so ordinary **Iron Ingot** and **Copper Alloy Ingot** are used.
- **Wet Concrete**. Yes, really. This one surprised me, I had to go back and do the math by hand. If you go by just the final production building, **Wet Concrete** looks bad, but if you include the power that it takes to extract the **Limestone**, **Wet Concrete** pulls ahead if you are using a **Miner Mk.3** at 250% on a normal or impure node.
- The nuclear solution is way out in crazy town, packaging and sinking over 130k **Packaged Water** by way of **Coated Iron Canister**. This puts tremendous pressure on any other recipe that would ordinarily use **Copper Ore**, like **Copper Rotor** which is used in the non-nuclear solution but moves to the standard **Rotor** recipe in the nuclear solution.
- **Electromagnetic Connection Rod** is only used because so much **Copper Ore** is used for **Coated Iron Canister** in the nuclear solution. Prior to the fluid update which introduced the new **Empty Canister** recipes, the standard **Electromagnetic Control Rod** recipe was used.
- **Iron Wire**, because there just isn't enough **Copper Ore** in the world. In fact, the nuclear solution uses so much **Wire** that it produces **Screw**s with the standard recipe by way of the **Steel Rod** recipe rather than the more obvious **Casted Screw** option that the non-nuclear solution uses.
- **Oil** and **Coal** usage in the nuclear solution is interesting. With no need to use those resources for power, otherwise overlooked recipes like **Compacted Steel Ingot**, **Coke Steel Ingot**, **Adhered Iron Plate**, **Steel Coated Plate** and **Insulated Cable** become viable. **Steel Coated Plate** is even used a bit in the non-nuclear solution.
