//
// Created by Peti on 2019. 07. 16..
//

#include "BassGuitar.h"

std::string BassGuitar::sound()
{
    return "Duum-duum-duum";
}

BassGuitar::BassGuitar() : StringedInstrument("Bass Guitar", 6)
{}



BassGuitar::BassGuitar(int numberOfStrings) : StringedInstrument("Bass Guitar", numberOfStrings)
{}

void BassGuitar::play()
{
    StringedInstrument::play();
}