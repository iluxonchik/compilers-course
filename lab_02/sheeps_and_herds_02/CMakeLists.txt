cmake_minimum_required(VERSION 3.3)
project(sheep_and_herds)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp AbstractSheep.h WhiteSheep.h BlackSheep.h Herd.h Animal.h Visitor.h Goat.h SheerVisitor.h PetVisitor.h)
add_executable(sheep_and_herds ${SOURCE_FILES})