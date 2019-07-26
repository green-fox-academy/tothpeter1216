//
// Created by Peti on 2019. 07. 26..
//

#ifndef GARDEN_APP_GARDEN_H
#define GARDEN_APP_GARDEN_H

#include <regex>
#include <vector>
#include "Plant.h"
#include "Flower.h"
#include "Tree.h"
#include <string>

class Garden
{
public:
    void watering(int water);

    void plantAdder(Plant &plant);

    std::string needWaterPlants();

private:
    std::vector<Plant *> _plantsOfGarden;
};


#endif //GARDEN_APP_GARDEN_H
