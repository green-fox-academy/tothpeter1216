//
// Created by Peti on 2019. 08. 01..
//

#ifndef EXAM_EXAMPLE_CLASSES_ANIMALSHELTER_H
#define EXAM_EXAMPLE_CLASSES_ANIMALSHELTER_H

#include "Animal.h"
#include <vector>
#include <string>
#include <stdlib.h>
#include <time.h>


class AnimalShelter
{
public:
    AnimalShelter();

    int rescueAnimal(Animal *animal);

    int heal();

    void addAdopter(std::string name);

    void findNewOwner();

    int earnDonation(int donation);

    void toString();

private:
    int _budget;
    std::vector<Animal *> _animalsInShelter;
    std::vector<std::string> _adopters;

};


#endif //EXAM_EXAMPLE_CLASSES_ANIMALSHELTER_H
