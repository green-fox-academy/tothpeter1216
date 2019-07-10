//
// Created by Peti on 2019. 07. 10..
//

#include "post_it.h"

PostIt::PostIt(const std::string &backgroundColor, const std::string &textOnIt, const std::string &textColor)
        : _backgroundColor(backgroundColor), _textOnIt(textOnIt), _textColor(textColor)
{}

const std::string &PostIt::getBackgroundColor() const
{
    return _backgroundColor;
}

void PostIt::setBackgroundColor(const std::string &backgroundColor)
{
    _backgroundColor = backgroundColor;
}

const std::string &PostIt::getTextOnIt() const
{
    return _textOnIt;
}

void PostIt::setTextOnIt(const std::string &textOnIt)
{
    _textOnIt = textOnIt;
}

const std::string &PostIt::getTextColor() const
{
    return _textColor;
}

void PostIt::setTextColor(const std::string &textColor)
{
    _textColor = textColor;
}
