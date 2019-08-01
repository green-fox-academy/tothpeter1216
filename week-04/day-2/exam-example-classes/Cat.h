//
// Created by Peti on 2019. 08. 01..
//

#ifndef EXAM_EXAMPLE_CLASSES_CAT_H
#define EXAM_EXAMPLE_CLASSES_CAT_H

#include "Animal.h"


class Cat : public Animal
{
public:
    Cat(bool isHealthy);

    Cat(const std::string &animalName, bool isHealthy);
};


#endif //EXAM_EXAMPLE_CLASSES_CAT_H
