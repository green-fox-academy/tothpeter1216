//
// Created by Peti on 2019. 07. 16..
//

#include "ElectricGuitar.h"

std::string ElectricGuitar::sound()
{
    return "Twang";
}

ElectricGuitar::ElectricGuitar() : StringedInstrument("Electric Guitar", 6)
{}



ElectricGuitar::ElectricGuitar(int numberOfStrings) : StringedInstrument("Electric Guitar", numberOfStrings)
{}

void ElectricGuitar::play()
{
    StringedInstrument::play();
}


