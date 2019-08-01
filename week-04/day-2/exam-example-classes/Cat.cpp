//
// Created by Peti on 2019. 08. 01..
//

#include "Cat.h"

Cat::Cat(bool isHealthy) : Animal(isHealthy)
{
    srand (time(nullptr));
    _healCost = rand() % 7;
    std::cout << _healCost << std::endl;
    _animalName = "cat";
}

Cat::Cat(const std::string &animalName, bool isHealthy) : Animal(animalName, isHealthy)
{
    srand (time(nullptr));
    _healCost = rand() % 7;
}
