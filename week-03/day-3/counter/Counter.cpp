//
// Created by Peti on 2019. 07. 10..
//

#include "Counter.h"


Counter::Counter()
{
    _value = 0;
    originalValue = _value;
}

Counter::Counter(int value) : _value(value)
{
    originalValue = _value;
}

void Counter::add(int a)
{
    _value += a;
}

void Counter::add()
{
    _value ++;
}

void Counter::reset(){
    _value = originalValue;
}

int Counter::get() const
{
    return _value;
}

void Counter::set(int value)
{
    _value = value;
}


