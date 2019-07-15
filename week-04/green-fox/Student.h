//
// Created by Peti on 2019. 07. 15..
//

#ifndef GREEN_FOX_STUDENT_H
#define GREEN_FOX_STUDENT_H


#include "Person.h"

class Student : public Person
{

public:
    Student(const std::string &name, int age, Gender gender, const std::string &previousOrganization);

    Student();

    void getGoal() override ;
    void introduce() override ;
    void skipDays(int numberOfDays);

private:
    std::string _previousOrganization;
    int _skippedDays;


};


#endif //GREEN_FOX_STUDENT_H
