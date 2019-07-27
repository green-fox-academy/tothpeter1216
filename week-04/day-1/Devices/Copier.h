//
// Created by Peti on 2019. 07. 27..
//

#ifndef DEVICES_COPIER_H
#define DEVICES_COPIER_H


#include "Printer.h"
#include "Scanner.h"

class Copier : public Printer , public Scanner
{
public:
    Copier(int sizeX, int sizeY, int speed);
    void copy ();

    std::string getSize() override;

};


#endif //DEVICES_COPIER_H
