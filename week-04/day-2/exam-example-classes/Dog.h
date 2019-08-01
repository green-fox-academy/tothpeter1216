//
// Created by Peti on 2019. 08. 01..
//

#ifndef EXAM_EXAMPLE_CLASSES_DOG_H
#define EXAM_EXAMPLE_CLASSES_DOG_H

#include "Animal.h"


class Dog : public Animal
{
public:
    Dog(const std::string &animalName, bool isHealthy);

    Dog(bool isHealthy);
};


#endif //EXAM_EXAMPLE_CLASSES_DOG_H
