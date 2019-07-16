//
// Created by Peti on 2019. 07. 16..
//

#ifndef FLYABLE_VEHICLE_H
#define FLYABLE_VEHICLE_H


class Vehicle
{
protected:
    virtual void go() = 0;

    virtual void toot() = 0;

    virtual void park() = 0;


};


#endif //FLYABLE_VEHICLE_H
