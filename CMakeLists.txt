cmake_minimum_required(VERSION 3.21)
project(AdvancedProgrammingAssignment)

set(CMAKE_CXX_STANDARD 14)

add_executable(AdvancedProgrammingAssignment
        TestDrive.cpp Game.cpp Game.h GameComponent.cpp GameComponent.h DrawabaleGameComponent.cpp DrawabaleGameComponent.h)
