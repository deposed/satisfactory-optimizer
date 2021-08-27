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
