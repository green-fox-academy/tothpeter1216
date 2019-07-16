//
// Created by Peti on 2019. 07. 16..
//

#include "StringedInstrument.h"



StringedInstrument::StringedInstrument(const std::string &name, int numberOfStrings) : Instrument(name),
                                                                                       numberOfStrings(numberOfStrings)
{}

void StringedInstrument::play()
{
    std::cout << _name << " , a " << numberOfStrings <<  "-stringed instrument that goes " << sound() << std::endl;
}


