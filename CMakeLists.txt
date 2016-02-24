cmake_minimum_required(VERSION 3.3)
project(HW5)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")


set(SOURCE_FILES
        round_russian.cpp
        round_russian.h main.cpp)

add_executable(HW5 ${SOURCE_FILES})