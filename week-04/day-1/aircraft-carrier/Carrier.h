//
// Created by Peti on 2019. 07. 26..
//

#ifndef AIRCRAFT_CARRIER_CARRIER_H
#define AIRCRAFT_CARRIER_CARRIER_H


#include <regex>
#include <vector>
#include "Aircrafts.h"

class Carrier
{
public:
    Carrier(int storeOfAmmo, int healthPoint);

    void addAircraft(Aircrafts &aircraft);

    void fill();

    void fight(Carrier &carrier);

    int getHealthPoint() const;

    void setHealthPoint(int healthPoint);

    std::string getStatus();

private:
    std::vector<Aircrafts *> _aircraftOnBoard;
    int _storeOfAmmo;
    int _healthPoint;
};


#endif //AIRCRAFT_CARRIER_CARRIER_H
