cmake_minimum_required(VERSION 3.15)
project(hw08)

set(CMAKE_CXX_STANDARD 14)

add_executable(hw08 main.cpp header.h patient.cpp doctor.cpp person.cpp bill.cpp date.cpp)