cmake_minimum_required(VERSION 3.7)
project(KeyLogger)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp KeyConstants.h Helper.h Base64.h IO.h)
add_executable(KeyLogger ${SOURCE_FILES})