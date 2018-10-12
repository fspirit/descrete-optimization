cmake_minimum_required(VERSION 3.9)
project(cpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(cpp main.cpp KnapsackItem.h SimpleGreedySolver.cpp SimpleGreedySolver.h DynamicProgrammingSolver.cpp DynamicProgrammingSolver.h)