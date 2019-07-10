//
// Created by Peti on 2019. 07. 10..
//

#include "Animal.h"

Animal::Animal() : _hunger(50),  _thirst(50)
{}
Animal::Animal(int hunger, int thirst) : _hunger(hunger), _thirst(thirst)
{}

void Animal::eat()
{
    _hunger += 1;
}

void Animal::drink()
{
    _thirst += 1;
}

void Animal::play()
{
    _thirst += 1;
    _hunger += 1;
}

int Animal::getHunger() const
{
    return _hunger;
}

void Animal::setHunger(int hunger)
{
    _hunger = hunger;
}

int Animal::getThirst() const
{
    return _thirst;
}

void Animal::setThirst(int thirst)
{
    _thirst = thirst;
}


