//
// Created by Peti on 2019. 08. 01..
//

#include "Dog.h"

Dog::Dog(const std::string &animalName, bool isHealthy) : Animal(animalName, isHealthy)
{
    srand (time(nullptr));
    _healCost = rand() % 8 + 1;
}

Dog::Dog(bool isHealthy) : Animal(isHealthy)
{
    srand (time(nullptr));
    _healCost = rand() % 8 + 1;
    _animalName = "dog";
}
