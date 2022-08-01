cmake_minimum_required(VERSION 3.23)
project(LibNetworking)

set(CMAKE_CXX_STANDARD 20)

file(GLOB SRC_FILES
        Utils/*.cpp
        Socket/*.cpp)

add_executable(LibNetworking main.cpp ${SRC_FILES})