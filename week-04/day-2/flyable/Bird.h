//
// Created by Peti on 2019. 07. 16..
//

#ifndef ZOO_BIRD_H
#define ZOO_BIRD_H


#include "Animal.h"
#include "Flyable.h"
#include <iostream>
#include <string>

class Bird : public Animal, Flyable
{

public:
    Bird(const std::string &name);

    std::string breed() override ;

    void land() override ;
    void fly() override ;
    void takeOff()override ;

};


#endif //ZOO_BIRD_H
