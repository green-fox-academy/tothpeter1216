cmake_minimum_required(VERSION 3.14)
project(aircraft_carrier)

set(CMAKE_CXX_STANDARD 14)

add_executable(aircraft_carrier main.cpp Aircrafts.cpp Aircrafts.h F16.cpp F16.h F35.cpp F35.h Carrier.cpp Carrier.h)