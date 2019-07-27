//
// Created by Peti on 2019. 07. 27..
//

#include <string>
#include "Printer2D.h"

std::string Printer2D::getSize()
{
    return std::to_string(_sizeX) + "  X  " + std::to_string(_sizeY);
}

Printer2D::Printer2D(int sizeX, int sizeY) : Printer(sizeX, sizeY)
{}
