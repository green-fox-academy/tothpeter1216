#include <iostream>
#include "Plant.h"
#include "Flower.h"
#include "Tree.h"
#include "Garden.h"

int main()
{
    Flower yellow("yellow");
    Flower blue("blue");
    Tree purple("purple");
    Tree orange("orange");
    Garden garden;

    garden.plantAdder(yellow);
    garden.plantAdder(blue);
    garden.plantAdder(purple);
    garden.plantAdder(orange);


    garden.needWaterPlants();
    garden.watering(40);
    garden.needWaterPlants();
    garden.watering(70);
    garden.needWaterPlants();

    return 0;
}