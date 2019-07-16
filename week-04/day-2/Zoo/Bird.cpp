//
// Created by Peti on 2019. 07. 16..
//

#include "Bird.h"

Bird::Bird(const std::string &name) : Animal(name)
{}

std::string Bird::breed()
{
    return "by eggs";
}
