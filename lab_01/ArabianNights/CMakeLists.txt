cmake_minimum_required(VERSION 3.3)
project(ArabianNights)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp MagicLamp.cpp MagicLamp.h AbstractGenie.h AbstractGenie.cpp FriendlyGenie.cpp FriendlyGenie.h GrumpyGenie.cpp GrumpyGenie.h RecyclableDaemon.cpp RecyclableDaemon.h)
add_executable(ArabianNights ${SOURCE_FILES})