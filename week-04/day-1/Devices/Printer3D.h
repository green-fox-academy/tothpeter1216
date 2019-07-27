//
// Created by Peti on 2019. 07. 27..
//

#ifndef DEVICES_PRINTER3D_H
#define DEVICES_PRINTER3D_H

#include <string>
#include "Printer.h"

class Printer3D : public Printer
{
public:
    Printer3D(int sizeX, int sizeY, int sizeZ);

    std::string getSize() override;

protected:
    int _sizeZ;

};


#endif //DEVICES_PRINTER3D_H
