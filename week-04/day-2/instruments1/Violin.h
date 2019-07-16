//
// Created by Peti on 2019. 07. 16..
//

#ifndef INSTRUMENTS1_VIOLIN_H
#define INSTRUMENTS1_VIOLIN_H


#include "StringedInstrument.h"

class Violin : public StringedInstrument
{
public:
    Violin();

    Violin(int numberOfStrings);

    std::string sound ()override;
    void play () override ;

};


#endif //INSTRUMENTS1_VIOLIN_H
