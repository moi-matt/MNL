cmake_minimum_required(VERSION 3.17)
project(MNL C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra -pedantic-errors")
add_executable(MNL main.c cmake-build-debug/CMakeFiles/analyseMat.c cmake-build-debug/CMakeFiles/analyseMat.h)