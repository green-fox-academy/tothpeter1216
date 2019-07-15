//
// Created by Peti on 2019. 07. 15..
//

#ifndef GREEN_FOX_COHORT_H
#define GREEN_FOX_COHORT_H

#include <string>
#include <vector>
#include "Student.h"
#include "Mentor.h"
#include <iostream>


class Cohort
{
public:
    Cohort(const std::string &name);

    void addStudent(Student *student);
    void addMentor(Mentor *mentor);

    void info();


private:
    std::string _name;
    std::vector<Student*> students;
    std::vector<Mentor*> mentors;



};


#endif //GREEN_FOX_COHORT_H
