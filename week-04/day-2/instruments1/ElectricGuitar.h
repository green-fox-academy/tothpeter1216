//
// Created by Peti on 2019. 07. 16..
//

#ifndef INSTRUMENTS1_ELECTRICGUITAR_H
#define INSTRUMENTS1_ELECTRICGUITAR_H


#include "StringedInstrument.h"
#include <iostream>
#include <string>

class ElectricGuitar : public StringedInstrument
{

public:
    ElectricGuitar();

    ElectricGuitar(int numberOfStrings);

    std::string sound ()override;
    void play () override ;

};


#endif //INSTRUMENTS1_ELECTRICGUITAR_H
