//
// Created by Peti on 2019. 07. 15..
//

#include "Person.h"
#include <iostream>

Person::Person(const std::string &name, int age, Gender gender) : _name(name), _age(age), _gender(gender)
{}

Person::Person()
{
    _name = "Jane Doe";
    _age = 30;
    _gender = Gender::FEMALE;
}

void Person::introduce()
{
    std::cout << "Hi, I'm " << _name << ", a " <<  _age << " year old " << genderToString(_gender) << "." << std::endl;

}

void Person::getGoal()
{
    std::cout << "My goal is: Live for the moment!" << std:: endl;

}

Gender Person::getGender() const
{
    return _gender;
}

std::string Person::genderToString(Gender gender)
{
    switch (gender){
        case Gender::MALE:
            return "Male";
        case Gender::FEMALE:
            return "Female";
        default:
            "Unkown";
    }

}
