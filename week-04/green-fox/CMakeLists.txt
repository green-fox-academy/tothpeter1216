cmake_minimum_required(VERSION 3.14)
project(green_fox)

set(CMAKE_CXX_STANDARD 14)

add_executable(green_fox main.cpp Person.cpp Person.h Student.cpp Student.h Mentor.cpp Mentor.h Cohort.cpp Cohort.h Sponsor.cpp Sponsor.h)