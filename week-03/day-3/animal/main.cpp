#include <iostream>
#include "Animal.h"

int main()
{

Animal tiger;

std::cout << tiger.getHunger() << " " << tiger.getThirst() << std::endl;

tiger.eat();
tiger.drink();
tiger.play();
    std::cout << tiger.getHunger() << " " << tiger.getThirst() << std::endl;


    return 0;
}

//Create an Animal class
//Every animal has a hunger value, which is a whole number
//Every animal has a thirst value, which is a whole number
//when creating a new animal object these values are created with the default 50 value
//Every animal can eat() which decreases their hunger by one
//Every animal can drink() which decreases their thirst by one
//Every animal can play() which increases both by one