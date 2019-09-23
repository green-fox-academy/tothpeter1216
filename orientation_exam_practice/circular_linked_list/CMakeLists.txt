cmake_minimum_required(VERSION 3.14)
project(circular_linked_list C)

set(CMAKE_C_STANDARD 11)

add_executable(circular_linked_list main.c circ_linked_list.h circ_linked_list.c)