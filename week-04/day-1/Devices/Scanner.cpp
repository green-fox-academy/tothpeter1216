//
// Created by Peti on 2019. 07. 27..
//

#include <iostream>
#include "Scanner.h"

Scanner::Scanner(int speed) : _speed(speed)
{}

void Scanner::scan()
{
std::cout << "I'm scanning a document " << _speed << " ppm\n";
}
