cmake_minimum_required (VERSION 3.8)

project("satisfactory-optimizer")

set(ortools_dir "" CACHE PATH "Install directory of or-tools")
if(NOT DEFINED ortools_dir)
	message(FATAL_ERROR "Please specify or-tools directory with -Dortools_dir=<dir>")
elseif(NOT EXISTS ${ortools_dir})
	message(FATAL_ERROR ${ortools_dir} " does not exist")
endif()

include_directories(${ortools_dir}/include)
link_directories(${ortools_dir}/lib)

include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable (optimizer src/optimizer.cpp)
target_link_libraries (optimizer ortools)

