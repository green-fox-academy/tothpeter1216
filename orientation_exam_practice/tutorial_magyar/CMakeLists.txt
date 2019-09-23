cmake_minimum_required(VERSION 3.14)
project(tutorial_magyar C)

set(CMAKE_C_STANDARD 11)

add_executable(tutorial_magyar main.c linked_list_prev_next.h linked_list_prev_next.c)