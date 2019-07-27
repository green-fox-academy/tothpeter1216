//
// Created by Peti on 2019. 07. 27..
//

#ifndef DEVICES_PRINTER2D_H
#define DEVICES_PRINTER2D_H

#include "Printer.h"

class Printer2D : public Printer
{
public:
    Printer2D(int sizeX, int sizeY);

    std::string getSize() override;

protected:

};


#endif //DEVICES_PRINTER2D_H
