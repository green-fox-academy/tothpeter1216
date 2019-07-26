//
// Created by Peti on 2019. 07. 26..
//

#include "F16.h"

F16::F16()
{
    _maxAmmo = 8;
    _baseDamage = 30;
    _type = "F16";
}

std::string F16::getType()
{
    return _type;
}

bool F16::isPriority()
{
    return false;
}
