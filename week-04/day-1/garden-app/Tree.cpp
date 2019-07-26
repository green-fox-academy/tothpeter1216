//
// Created by Peti on 2019. 07. 26..
//

#include "Tree.h"

bool Tree::waterNeed()
{
    return _currentWater < 10;;
}

void Tree::watering(double water)
{
    _currentWater += water * 0.4;
}

Tree::Tree(const std::string &name) : Plant(name, std::__cxx11::string())
{
    _type = "Tree";
}
