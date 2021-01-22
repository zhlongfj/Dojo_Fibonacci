cmake_minimum_required(VERSION 3.17)
project(Dojo_Fibonacci)

set(CMAKE_CXX_STANDARD 20)

add_executable(Dojo_Fibonacci catch.hpp FibonacciTest.cpp Fibonacci.cpp Fibonacci.h)