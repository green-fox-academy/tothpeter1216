//
// Created by Peti on 2019. 07. 16..
//

#ifndef ZOO_REPTILE_H
#define ZOO_REPTILE_H


#include "Animal.h"

class Reptile : public Animal
{

public:
    Reptile(const std::string &name);

    std::string breed()override ;

};


#endif //ZOO_REPTILE_H
