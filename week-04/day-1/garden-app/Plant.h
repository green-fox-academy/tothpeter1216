//
// Created by Peti on 2019. 07. 26..
//

#ifndef GARDEN_APP_PLANT_H
#define GARDEN_APP_PLANT_H


#include <string>

class Plant
{
public:
    Plant(const std::string &name, std::string type);

    virtual bool waterNeed() = 0;

    virtual void watering(double water) = 0;

    double getCurrentWater() const;

    void setCurrentWater(double currentWater);

    const std::string &getName() const;

    void setName(const std::string &name);

    const std::string &getType() const;

    void setType(const std::string &type);

protected:
    double _currentWater;
    std::string _name;
    std::string _type;
};


#endif //GARDEN_APP_PLANT_H
