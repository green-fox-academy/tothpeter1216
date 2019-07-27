//
// Created by Peti on 2019. 07. 27..
//

#ifndef DEVICES_PRINTER_H
#define DEVICES_PRINTER_H

#include <string>


class Printer
{
public:
    Printer(int sizeX, int sizeY);
    virtual std::string getSize() = 0;
    void print();

protected:
    int _sizeX;
    int _sizeY;

};


#endif //DEVICES_PRINTER_H
