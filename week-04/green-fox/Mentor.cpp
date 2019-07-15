//
// Created by Peti on 2019. 07. 15..
//

#include "Mentor.h"
#include <iostream>

Mentor::Mentor(const std::string &name, int age, Gender gender, Level level) : Person(name,
                                                                                                               age,
                                                                                                               gender),
                                                                                                        _level(level)
{}

Mentor::Mentor()
{
    _name = "Jane Doe";
    _age = 30;
    _gender = Gender::FEMALE;
    _level = Level::INTERMEDIATE;
}

void Mentor::getGoal()
{
    std::cout << "My goal is: Educate brilliant junior software developers." << std::endl;
}

void Mentor::introduce()
{
    std::cout << "Hi, I'm " << _name << ", a " << _age << " year old "<< genderToString(_gender) << " " << levelToString(_level) << " mentor." << std::endl;
}

std::string Mentor::levelToString(Level level)
{
    {
        switch (level) {
            case Level::INTERMEDIATE:
                return "Intermediate";
            case Level::JUNIOR:
                return "Junior";
            case Level::SENIOR:
                return "senior";
            default:
                "Unkown";
        }
    }
}
