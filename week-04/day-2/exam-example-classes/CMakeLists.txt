cmake_minimum_required(VERSION 3.14)
project(exam_example_classes)

set(CMAKE_CXX_STANDARD 14)

add_executable(exam_example_classes main.cpp Animal.cpp Animal.h Cat.cpp Cat.h Dog.cpp Dog.h Parrot.cpp Parrot.h AnimalShelter.cpp AnimalShelter.h)