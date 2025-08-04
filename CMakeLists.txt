#///////////////////////////////////////////////////////////////////
#/ /home/doug/CLionProjects/simple.cpp 2025-08-03 13:07 dwg -     //
#/ This is an example of a minimum C++ client program using mwfw2 //
#///////////////////////////////////////////////////////////////////
#/ This file is made available under the                          //
#/ Creative Commons CC0 1.0 Universal Public Domain Dedication.   //
#///////////////////////////////////////////////////////////////////

cmake_minimum_required(VERSION 4.0)
project(simple)
set(CMAKE_CXX_SCAN_FOR_MODULES OFF)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_COMPILER clang++)
#include_directories("/usr/local/include/multiware/mwfw2/")
include_directories("/home/doug/public_html/fw/include/")

link_directories("/usr/local/lib/multiware/mwfw2")
add_executable(simple simple.cpp)
target_link_libraries(simple PRIVATE mwfw2 uuid cgicc)
