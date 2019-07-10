//
// Created by Peti on 2019. 07. 10..
//

#ifndef POST_IT_POST_IT_H
#define POST_IT_POST_IT_H

#include <string>


class PostIt
{
public:
    PostIt(const std::string &backgrounColor, const std::string &textOnIt, const std::string &textColor);

    const std::string &getBackgroundColor() const;

    void setBackgroundColor(const std::string &backgroundColor);

    const std::string &getTextOnIt() const;

    void setTextOnIt(const std::string &textOnIt);

    const std::string &getTextColor() const;

    void setTextColor(const std::string &textColor);

private:
    std::string _backgroundColor;
    std::string _textOnIt;
    std::string _textColor;

};


#endif //POST_IT_POST_IT_H
