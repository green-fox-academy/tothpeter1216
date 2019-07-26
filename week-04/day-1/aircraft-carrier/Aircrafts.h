//
// Created by Peti on 2019. 07. 26..
//

#ifndef AIRCRAFT_CARRIER_AIRCRAFTS_H
#define AIRCRAFT_CARRIER_AIRCRAFTS_H


#include <string>

class Aircrafts
{
public:
    Aircrafts();
    int fight();
    int refill(int ammo);
    virtual std::string getType() = 0;
    std::string getStatus();
    virtual bool isPriority() = 0;

    int getMaxAmmo() const;

    int getCurrentAmmo() const;

    int getBaseDamage() const;

    void setCurrentAmmo(int currentAmmo);

protected:
    int _maxAmmo;
    int _currentAmmo;
    int _baseDamage;
    std::string _type;
};


#endif //AIRCRAFT_CARRIER_AIRCRAFTS_H
