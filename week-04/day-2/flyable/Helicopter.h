//
// Created by Peti on 2019. 07. 16..
//

#ifndef FLYABLE_HELICOPTER_H
#define FLYABLE_HELICOPTER_H

#include "Flyable.h"
#include "Vehicle.h"
#include <iostream>
#include <string>


class Helicopter : public Flyable, Vehicle
{
public:
    void land() override;

    void fly() override;

    void takeOff() override;

    void go() override;

    void toot() override;

    void park() override;

};


#endif //FLYABLE_HELICOPTER_H
