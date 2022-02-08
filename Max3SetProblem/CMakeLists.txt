cmake_minimum_required(VERSION 3.20)
project(Max3SetProblem)

set(CMAKE_CXX_STANDARD 14)

add_executable(Max3SetProblem main.cpp "Source Files/CGAIndividual.cpp" "Header Files/CGAIndividual.h" "Source Files/CGAOptimizer.cpp" "Header Files/CGAOptimizer.h" "Source Files/CMax3SatProblem.cpp" "Header Files/CMax3SatProblem.h" "Header Files/MySmartPointer/Counter.h" "Header Files/MySmartPointer/SmartPointer.h")
