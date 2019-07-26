//
// Created by Peti on 2019. 07. 26..
//

#ifndef GARDEN_APP_FLOWER_H
#define GARDEN_APP_FLOWER_H


#include "Plant.h"

class Flower : public Plant
{
public:
    Flower(const std::string &name);

    bool waterNeed() override;

    void watering(double water) override;

};


#endif //GARDEN_APP_FLOWER_H
