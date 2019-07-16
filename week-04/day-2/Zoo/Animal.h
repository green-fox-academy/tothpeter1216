//
// Created by Peti on 2019. 07. 16..
//

#ifndef ZOO_ANIMAL_H
#define ZOO_ANIMAL_H

#include <string>


class Animal
{

public:
    Animal(const std::string &name);

    virtual std::string breed() =0;

    const std::string &getName() const;


protected:
    std::string _name;
    int age;

};


#endif //ZOO_ANIMAL_H
