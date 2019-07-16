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

void Bird::land()
{
    std::cout << "The bird landed." << std::endl;
}

void Bird::fly()
{
    std::cout << "The bird flies." << std::endl;
}

void Bird::takeOff()
{
    std::cout << "The bird landed." << std::endl;
}
