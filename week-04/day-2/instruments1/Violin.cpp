//
// Created by Peti on 2019. 07. 16..
//

#include "Violin.h"

std::string Violin::sound()
{
    return "Screech";
}

Violin::Violin() : StringedInstrument("Violin", 4)
{}



Violin::Violin(int numberOfStrings) : StringedInstrument("Violin", numberOfStrings)
{}

void Violin::play()
{
    StringedInstrument::play();
}