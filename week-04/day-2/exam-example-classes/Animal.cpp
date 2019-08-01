//
// Created by Peti on 2019. 08. 01..
//

#include "Animal.h"

void Animal::heal()
{
    _isHealthy = true;
}

bool Animal::isAdoptable()
{
    if (!_isHealthy) {
        return false;
    } else if (_isHealthy) {
        return true;
    }
}

void Animal::toString()
{
if (!_isHealthy){
    std::cout << _animalName << " is not healthy (" << _healCost << " Euro), and not adoptable" << std::endl;
} else{
    std::cout << _animalName << " is healthy, and adoptable" << std::endl;
}
}

Animal::Animal(const std::string &animalName, bool isHealthy) : _animalName(animalName), _isHealthy(isHealthy)
{}

Animal::Animal(bool isHealthy) : _isHealthy(isHealthy)
{}



bool Animal::isIsHealthy() const
{
    return _isHealthy;
}


int Animal::getHealCost() const
{
    return _healCost;
}

