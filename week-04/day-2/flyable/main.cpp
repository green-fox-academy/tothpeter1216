#include <iostream>
#include "Helicopter.h"
#include "Bird.h"

int main()
{
    Helicopter helicopter;
    helicopter.fly();
    helicopter.land();
    helicopter.takeOff();

    Bird bird("Bird");
    bird.fly();
    bird.land();
    bird.takeOff();


    return 0;
}



//Create a Flyable abstract class
//it should have land, fly and takeOff pure virtual functions
//Create an abstract Vehicle class
//it should have at least 3 members
//Inherit Helicopter class from Vehicle and Flyable
//implement the functions of Flyable abstract class(they should print something on the console)
//Inherit Bird from your abstract Animal class (zoo exercise) and Flyable
//implement the functions of Flyable abstract class