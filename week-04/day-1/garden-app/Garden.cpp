//
// Created by Peti on 2019. 07. 26..
//

#include "Garden.h"
#include <iostream>

void Garden::watering(int water)
{

    std::cout << "\nWatering with " << water << std::endl;
    double needCounter = 0;
    for (int i = 0; i < _plantsOfGarden.size(); ++i) {
        if (_plantsOfGarden[i]->waterNeed()) {
            needCounter++;
        }
    }
    if (needCounter == 0) {
        std::cout << "The watering is not needful." << std::endl;
    } else {
        for (int i = 0; i < _plantsOfGarden.size(); ++i) {
            if (_plantsOfGarden[i]->waterNeed()) {
                _plantsOfGarden[i]->watering(water / needCounter);
            }
        }
    }

}

void Garden::plantAdder(Plant &plant)
{
    _plantsOfGarden.push_back(&plant);
}

std::string Garden::needWaterPlants()
{
    std::string needWaterPlants;
    for (int i = 0; i < _plantsOfGarden.size(); ++i) {
        if (_plantsOfGarden[i]->waterNeed()) {
            std::cout << "The " << _plantsOfGarden[i]->getName() << " " << _plantsOfGarden[i]->getType()
                      << " needs water" << std::endl;
        } else {
            std::cout << "The " << _plantsOfGarden[i]->getName() << " " << _plantsOfGarden[i]->getType()
                      << " doesnt need water" << std::endl;
        }
    }

    return needWaterPlants;
}
