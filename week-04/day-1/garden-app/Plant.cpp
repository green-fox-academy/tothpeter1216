//
// Created by Peti on 2019. 07. 26..
//

#include "Plant.h"

Plant::Plant(const std::string &name, std::string type) : _currentWater(0), _name(name), _type(type)
{}

double Plant::getCurrentWater() const
{
    return _currentWater;
}

void Plant::setCurrentWater(double currentWater)
{
    _currentWater = currentWater;
}

const std::string &Plant::getName() const
{
    return _name;
}

void Plant::setName(const std::string &name)
{
    _name = name;
}

const std::string &Plant::getType() const
{
    return _type;
}

void Plant::setType(const std::string &type)
{
    _type = type;
}
