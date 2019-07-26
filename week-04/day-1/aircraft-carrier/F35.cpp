//
// Created by Peti on 2019. 07. 26..
//

#include "F35.h"

F35::F35()
{
    _maxAmmo = 12;
    _baseDamage = 50;
    _type = "F35";
}

std::string F35::getType()
{
    return _type;
}

bool F35::isPriority()
{
    return true;
}
