//
// Created by Peti on 2019. 07. 16..
//

#include "Reptile.h"

Reptile::Reptile(const std::string &name) : Animal(name)
{}

std::string Reptile::breed()
{
    return "by eggs";
}
