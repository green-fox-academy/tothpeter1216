//
// Created by Peti on 2019. 07. 15..
//

#ifndef GREEN_FOX_PERSON_H
#define GREEN_FOX_PERSON_H

#include <string>


enum class Gender {MALE, FEMALE};


class Person
{
public:
    Person(const std::string &name, int age, Gender gender);

    Person();

    virtual void introduce();

    virtual void getGoal();

    Gender getGender() const;

protected:
    std::string _name;
    int _age;
    Gender _gender;

    std::string genderToString(Gender gender);

};


#endif //GREEN_FOX_PERSON_H
