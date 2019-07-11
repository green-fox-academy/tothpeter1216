//
// Created by Peti on 2019. 07. 11..
//

#include "Station.h"

Station::Station(int gasAmount) : gasAmount(gasAmount)
{}

int Station::getGasAmount() const
{
    return gasAmount;
}

void Station::setGasAmount(int gasAmount)
{
    Station::gasAmount = gasAmount;
}

void Station::fill(Car &car)
{

    gasAmount--;
    car.fill();

}
