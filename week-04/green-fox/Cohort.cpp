//
// Created by Peti on 2019. 07. 15..
//

#include "Cohort.h"

void Cohort::addStudent(Student *student)
{
    students.push_back(student);

}

void Cohort::addMentor(Mentor *mentor)
{
    mentors.push_back(mentor);

}

Cohort::Cohort(const std::string &name) : _name(name)
{}

void Cohort::info()
{
std::cout << "The " <<  _name << " cohort has " <<  students.size() << " students and " <<  mentors.size() << " mentors." << std::endl;
}
