//
// Created by Peti on 2019. 07. 26..
//

#ifndef AIRCRAFT_CARRIER_F35_H
#define AIRCRAFT_CARRIER_F35_H


#include "Aircrafts.h"

class F35 : public Aircrafts
{
public:
    F35();

    std::string getType() override;

    bool isPriority() override;

};


#endif //AIRCRAFT_CARRIER_F35_H
