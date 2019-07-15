//
// Created by Peti on 2019. 07. 15..
//

#ifndef GREEN_FOX_MENTOR_H
#define GREEN_FOX_MENTOR_H


#include "Person.h"
#include <string>

enum class Level {JUNIOR, INTERMEDIATE, SENIOR};

class Mentor : public Person
{
public:
    Mentor(const std::string &name, int age, Gender gender, Level level);

    Mentor();

    void getGoal() override ;
    void introduce() override ;

private:
    std::string levelToString(Level level);

    Level _level;



};


#endif //GREEN_FOX_MENTOR_H
