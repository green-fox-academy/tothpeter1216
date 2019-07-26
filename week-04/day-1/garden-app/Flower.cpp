//
// Created by Peti on 2019. 07. 26..
//

#include "Flower.h"

bool Flower::waterNeed()
{
    return _currentWater < 5;

}

void Flower::watering(double water)
{
    _currentWater += water * 0.75;
}

Flower::Flower(const std::string &name) : Plant(name, std::__cxx11::string())
{
    _type = "Flower";
}


