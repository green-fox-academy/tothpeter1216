//
// Created by Peti on 2019. 07. 16..
//

#ifndef INSTRUMENTS1_INSTRUMENT_H
#define INSTRUMENTS1_INSTRUMENT_H

#include <string>


class Instrument
{
public:
    Instrument(const std::string &name);

    virtual void play() = 0;


protected:
    std::string _name;

};


#endif //INSTRUMENTS1_INSTRUMENT_H
