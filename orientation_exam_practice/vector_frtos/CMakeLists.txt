cmake_minimum_required(VERSION 3.14)
project(vector_frtos C)

set(CMAKE_C_STANDARD 11)

add_executable(vector_frtos main.c vector.h vector.c)