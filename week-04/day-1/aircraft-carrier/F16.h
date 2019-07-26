//
// Created by Peti on 2019. 07. 26..
//

#ifndef AIRCRAFT_CARRIER_F16_H
#define AIRCRAFT_CARRIER_F16_H


#include "Aircrafts.h"

class F16 : public Aircrafts
{
public:
    F16();

    std::string getType() override;

    bool isPriority() override;

};


#endif //AIRCRAFT_CARRIER_F16_H
