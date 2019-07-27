//
// Created by Peti on 2019. 07. 27..
//

#include "Printer3D.h"

Printer3D::Printer3D(int sizeX, int sizeY, int sizeZ) : Printer(sizeX, sizeY), _sizeZ(sizeZ)
{}

std::string Printer3D::getSize()
{
    return std::to_string(_sizeX) + "  X  " + std::to_string(_sizeY) + "  X  " + std::to_string(_sizeZ);
}
