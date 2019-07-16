//
// Created by Peti on 2019. 07. 16..
//

#include "Animal.h"

const std::string &Animal::getName() const
{
    return _name;
}

Animal::Animal(const std::string &name) : _name(name)
{}
