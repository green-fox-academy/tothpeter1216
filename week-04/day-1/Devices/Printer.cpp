//
// Created by Peti on 2019. 07. 27..
//

#include <iostream>
#include "Printer.h"
#include <string>

Printer::Printer(int sizeX, int sizeY) : _sizeX(sizeX), _sizeY(sizeY)
{}

void Printer::print()
{
std::cout << "I'm printing something that's " + getSize() + " cm.\n";
}
