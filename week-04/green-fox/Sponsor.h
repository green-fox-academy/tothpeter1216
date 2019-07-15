//
// Created by Peti on 2019. 07. 15..
//

#ifndef GREEN_FOX_SPONSOR_H
#define GREEN_FOX_SPONSOR_H

#include <string>
#include "Person.h"
#include <iostream>


class Sponsor : public Person
{
public:
    Sponsor(const std::string &name, int age, Gender gender, const std::string &company);

    Sponsor();

    void introduce() override ;
    void hire();
    void getGoal() override ;


private:
    std::string _company;
    int _hiredStudents;


};


#endif //GREEN_FOX_SPONSOR_H
