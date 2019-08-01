#include <iostream>
#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include "Parrot.h"
#include "AnimalShelter.h"

int main()
{
    Cat cat(false);
    cat.toString();

    Dog dog(false);
    Parrot parrot(false);
    //cat.heal();
    cat.toString();
    dog.toString();

    AnimalShelter animalShelter;
    std::cout << animalShelter.rescueAnimal(&cat) << std::endl;
    animalShelter.rescueAnimal(&dog);

    animalShelter.heal();
    cat.toString();
    dog.toString();
    std::cout << animalShelter.rescueAnimal(&parrot) << std::endl;
    animalShelter.addAdopter("John");
    animalShelter.findNewOwner();

    std::cout << animalShelter.earnDonation(1000) << std::endl;
    std::cout << std::endl;
    animalShelter.toString();





    std::cout << "Hello, World!" << std::endl;
    return 0;
}