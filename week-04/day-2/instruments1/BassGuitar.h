//
// Created by Peti on 2019. 07. 16..
//

#ifndef INSTRUMENTS1_BASSGUITAR_H
#define INSTRUMENTS1_BASSGUITAR_H


#include "StringedInstrument.h"

class BassGuitar : public StringedInstrument
{
public:
    BassGuitar();

    BassGuitar(int numberOfStrings);

    std::string sound ()override;
    void play () override ;

};


#endif //INSTRUMENTS1_BASSGUITAR_H
