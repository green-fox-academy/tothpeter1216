//
// Created by Peti on 2019. 07. 27..
//

#ifndef DEVICES_SCANNER_H
#define DEVICES_SCANNER_H


#include <string>

class Scanner
{
public:
    Scanner(int speed);
    void scan();

protected:
    int _speed;

};


#endif //DEVICES_SCANNER_H
