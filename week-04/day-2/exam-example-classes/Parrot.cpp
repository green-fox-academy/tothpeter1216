//
// Created by Peti on 2019. 08. 01..
//

#include "Parrot.h"

Parrot::Parrot(const std::string &animalName, bool isHealthy) : Animal(animalName, isHealthy)
{
    srand(time(nullptr));
    _healCost = rand() % 7 + 4;
}

Parrot::Parrot(bool isHealthy) : Animal(isHealthy)
{
    srand(time(nullptr));
    _healCost = rand() % 7 + 4;
    _animalName = "parrot";
}
