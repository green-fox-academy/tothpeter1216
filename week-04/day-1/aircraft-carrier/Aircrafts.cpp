//
// Created by Peti on 2019. 07. 26..
//

#include "Aircrafts.h"

Aircrafts::Aircrafts()
{
    _currentAmmo = 0;
}

int Aircrafts::fight()
{
    int damage = _currentAmmo * _baseDamage;
    _currentAmmo = 0;

    return damage;
}

int Aircrafts::refill(int ammo)
{
    _currentAmmo + ammo <= _maxAmmo ? (_currentAmmo += ammo) : (_currentAmmo = _maxAmmo);

    return ammo - _currentAmmo;
}

std::string Aircrafts::getStatus()
{
    return "Type " + _type + ", Ammo:" + std::to_string(_currentAmmo) + ", Base Damage: " + std::to_string(_baseDamage)
           + ", All Damage: " + std::to_string(_currentAmmo * _baseDamage);
}

int Aircrafts::getMaxAmmo() const
{
    return _maxAmmo;
}

int Aircrafts::getCurrentAmmo() const
{
    return _currentAmmo;
}

int Aircrafts::getBaseDamage() const
{
    return _baseDamage;
}

void Aircrafts::setCurrentAmmo(int currentAmmo)
{
    _currentAmmo = currentAmmo;
}
