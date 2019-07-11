//
// Created by Peti on 2019. 07. 11..
//

#include "Car.h"

Car::Car(int gasAmount, int capacity) : gasAmount(gasAmount), capacity(capacity)
{}

int Car::getGasAmount() const
{
    return gasAmount;
}

void Car::setGasAmount(int gasAmount)
{
    Car::gasAmount = gasAmount;
}

int Car::getCapacity() const
{
    return capacity;
}

void Car::setCapacity(int capacity)
{
    Car::capacity = capacity;
}

bool Car::isFull()
{
    return capacity == gasAmount ? true : false;

}

void Car::fill()
{
    gasAmount++;

}
