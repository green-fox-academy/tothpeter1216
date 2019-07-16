//
// Created by Peti on 2019. 07. 16..
//

#ifndef INSTRUMENTS1_STRINGEDINSTRUMENT_H
#define INSTRUMENTS1_STRINGEDINSTRUMENT_H

#include "Instrument.h"
#include <iostream>
#include <string>


class StringedInstrument : public Instrument
{

public:
    StringedInstrument(const std::string &name, int numberOfStrings);

    virtual std::string sound() = 0;

    void play() override ;

protected:
    int numberOfStrings;

};


#endif //INSTRUMENTS1_STRINGEDINSTRUMENT_H
