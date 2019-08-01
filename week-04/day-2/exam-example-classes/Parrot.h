//
// Created by Peti on 2019. 08. 01..
//

#ifndef EXAM_EXAMPLE_CLASSES_PARROT_H
#define EXAM_EXAMPLE_CLASSES_PARROT_H

#include "Animal.h"


class Parrot : public Animal
{
public:
    Parrot(const std::string &animalName, bool isHealthy);

    Parrot(bool isHealthy);
};


#endif //EXAM_EXAMPLE_CLASSES_PARROT_H
