//
// Created by Peti on 2019. 07. 27..
//

#include "Copier.h"
#include <iostream>
#include <string>

Copier::Copier(int sizeX, int sizeY, int speed) : Printer(sizeX, sizeY), Scanner(speed)
{}

void Copier::copy()
{
    scan();
    std::cout << std::endl;
    print();
}

std::string Copier::getSize()
{
    return std::to_string(_sizeX) + "  X  " + std::to_string(_sizeY);
}
