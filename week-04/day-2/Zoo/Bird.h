//
// Created by Peti on 2019. 07. 16..
//

#ifndef ZOO_BIRD_H
#define ZOO_BIRD_H


#include "Animal.h"

class Bird : public Animal
{

public:
    Bird(const std::string &name);

    std::string breed() override ;

};


#endif //ZOO_BIRD_H
