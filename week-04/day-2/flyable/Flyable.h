//
// Created by Peti on 2019. 07. 16..
//

#ifndef FLYABLE_FLYABLE_H
#define FLYABLE_FLYABLE_H


class Flyable
{
protected:

    virtual void land() = 0;

    virtual void fly() = 0;

    virtual void takeOff() = 0;


};


#endif //FLYABLE_FLYABLE_H
