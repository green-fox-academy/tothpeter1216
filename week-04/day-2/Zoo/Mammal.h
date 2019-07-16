//
// Created by Peti on 2019. 07. 16..
//

#ifndef ZOO_MAMMAL_H
#define ZOO_MAMMAL_H


#include "Animal.h"
#include <iostream>

class Mammal : public Animal
{
public:
    Mammal(const std::string &name);

    std::string breed() override ;



};


#endif //ZOO_MAMMAL_H
