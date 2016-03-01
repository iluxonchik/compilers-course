cmake_minimum_required(VERSION 3.3)
project(sheep_and_herds)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Shearable.h AbstractSheep.h WhiteSheep.cpp WhiteSheep.h BlackSheep.cpp BlackSheep.h Herd.cpp Herd.h AbstractSheep.cpp)
add_executable(sheep_and_herds ${SOURCE_FILES})