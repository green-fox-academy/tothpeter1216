//
// Created by Peti on 2019. 08. 01..
//

#include "AnimalShelter.h"

AnimalShelter::AnimalShelter()
{
    _budget = 50;
}

int AnimalShelter::rescueAnimal(Animal *animal)
{
    _animalsInShelter.push_back(animal);
    return _animalsInShelter.size();

}

int AnimalShelter::heal()
{
    bool wasHealed = false;
    int i;
    for (i = 0; i < _animalsInShelter.size(); ++i) {
        if (!_animalsInShelter[i]->isIsHealthy() && _budget > _animalsInShelter[i]->getHealCost() && !wasHealed) {
            _animalsInShelter[i]->heal();
            _budget -= _animalsInShelter[i]->getHealCost();
            wasHealed = true;
        }
    }
    return wasHealed;
}

void AnimalShelter::addAdopter(std::string name)
{
    _adopters.push_back(name);
}

void AnimalShelter::findNewOwner()
{
    if (_animalsInShelter.size() != 0 && _adopters.size() != 0) {
        srand(time(nullptr));
        _animalsInShelter.erase(_animalsInShelter.begin() + (rand() % _animalsInShelter.size() + 1));
        _adopters.erase(_adopters.begin() + (rand() % _adopters.size() + 1));
    }
}

int AnimalShelter::earnDonation(int donation)
{
    _budget += donation;

    return donation;
}

void AnimalShelter::toString()
{
    std::cout << "Budget: " << _budget << " Euro,\n" << "There are " << _animalsInShelter.size() << " animal(s) and "
              << _adopters.size() << " potentional adopter(s)" << std::endl;

    for (int i = 0; i < _animalsInShelter.size(); ++i) {
        _animalsInShelter[i]->toString();
    }


    //Budget: <budget>€,
    //There are <animals.count> animal(s) and <potentionalAdopters.count> potential adopter(s)
    //<name> is not healthy (<heal cost>€), and not adoptable
    //<name> is healthy, and adoptable

}
