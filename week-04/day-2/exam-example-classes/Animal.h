//
// Created by Peti on 2019. 08. 01..
//

#ifndef EXAM_EXAMPLE_CLASSES_ANIMAL_H
#define EXAM_EXAMPLE_CLASSES_ANIMAL_H

#include <string>
#include <iostream>
#include <stdlib.h>
#include <time.h>


class Animal
{
public:
    Animal(const std::string &animalName, bool isHealthy);

    Animal(bool isHealthy);

    void heal();

    bool isAdoptable();

    void toString();


    bool isIsHealthy() const;

    int getHealCost() const;


protected:
    std::string _ownerName;
    std::string _animalName;
    bool _isHealthy;
    int _healCost;
};


#endif //EXAM_EXAMPLE_CLASSES_ANIMAL_H
