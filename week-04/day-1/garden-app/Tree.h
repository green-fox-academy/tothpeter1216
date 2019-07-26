//
// Created by Peti on 2019. 07. 26..
//

#ifndef GARDEN_APP_TREE_H
#define GARDEN_APP_TREE_H

#include "Plant.h"

class Tree : public Plant
{
public:
    Tree(const std::string &name);

    bool waterNeed() override;

    void watering(double water) override;

};


#endif //GARDEN_APP_TREE_H
