//
// Created by Peti on 2019. 07. 26..
//

#include "Carrier.h"
#include <iostream>
#include <string>

Carrier::Carrier(int storeOfAmmo, int healthPoint) : _storeOfAmmo(storeOfAmmo), _healthPoint(healthPoint)
{}

void Carrier::addAircraft(Aircrafts &aircraft)
{
    _aircraftOnBoard.push_back(&aircraft);
}

void Carrier::fill()
{

    int needAmmo = 0;
    for (int i = 0; i < _aircraftOnBoard.size(); ++i) {
        needAmmo += _aircraftOnBoard[i]->getMaxAmmo() - _aircraftOnBoard[i]->getCurrentAmmo();
    }
    if (_storeOfAmmo >= needAmmo) {
        for (int i = 0; i < _aircraftOnBoard.size() && _storeOfAmmo > 0; ++i) {
            _storeOfAmmo -= _aircraftOnBoard[i]->getMaxAmmo() - _aircraftOnBoard[i]->getCurrentAmmo();
            if (_storeOfAmmo >= _aircraftOnBoard[i]->getMaxAmmo() - _aircraftOnBoard[i]->getCurrentAmmo()) {
                _aircraftOnBoard[i]->refill(_aircraftOnBoard[i]->getMaxAmmo() - _aircraftOnBoard[i]->getCurrentAmmo());
                // std::cout << "1" << std::endl;
            } else {
                _aircraftOnBoard[i]->refill(_storeOfAmmo);
                _storeOfAmmo = 0;
                //  std::cout << "2" << std::endl;
            }


        }
    } else {
        for (int i = 0; i < _aircraftOnBoard.size() && _storeOfAmmo > 0; ++i) {
            if (_aircraftOnBoard[i]->isPriority()) {
                //_storeOfAmmo -= _aircraftOnBoard[i]->getMaxAmmo() - _aircraftOnBoard[i]->getCurrentAmmo();
                //std::cout << "3" << std::endl;
                if (_storeOfAmmo >= _aircraftOnBoard[i]->getMaxAmmo() - _aircraftOnBoard[i]->getCurrentAmmo()) {
                    _aircraftOnBoard[i]->refill(
                            _aircraftOnBoard[i]->getMaxAmmo() - _aircraftOnBoard[i]->getCurrentAmmo());
                    //    std::cout << "4" << std::endl;
                } else {
                    _aircraftOnBoard[i]->refill(_storeOfAmmo);
                    _storeOfAmmo = 0;
                    //  std::cout << "5" << std::endl;
                }
            }
        }
        for (int j = 0; j < _aircraftOnBoard.size() && _storeOfAmmo > 0; ++j) {
            _storeOfAmmo -= _aircraftOnBoard[j]->getMaxAmmo() - _aircraftOnBoard[j]->getCurrentAmmo();
            // std::cout << "6" << std::endl;
            if (_storeOfAmmo >= _aircraftOnBoard[j]->getMaxAmmo() - _aircraftOnBoard[j]->getCurrentAmmo()) {
                _aircraftOnBoard[j]->refill(_aircraftOnBoard[j]->getMaxAmmo() - _aircraftOnBoard[j]->getCurrentAmmo());
                // std::cout << "7" << std::endl;
            } else {
                _aircraftOnBoard[j]->refill(_storeOfAmmo);
                _storeOfAmmo = 0;
                //std::cout << "8" << std::endl;
            }
        }
    }
    if (_storeOfAmmo <= 0) {
        std::cout << "The tank is empty." << std::endl;
        //std::cout << "9" << std::endl;
    }
}

void Carrier::fight(Carrier &carrier)
{
    int damage = 0;
    for (int i = 0; i < _aircraftOnBoard.size(); ++i) {
        damage += _aircraftOnBoard[i]->getCurrentAmmo() * _aircraftOnBoard[i]->getBaseDamage();
        _aircraftOnBoard[i]->setCurrentAmmo(0);
    }
    carrier.setHealthPoint(carrier.getHealthPoint() - damage);

}

void Carrier::setHealthPoint(int healthPoint)
{
    _healthPoint = healthPoint;
}

int Carrier::getHealthPoint() const
{
    return _healthPoint;
}

std::string Carrier::getStatus()
{
    int totalDamage = 0;
    std::string aircrafts;
    for (int i = 0; i < _aircraftOnBoard.size(); ++i) {
        totalDamage += _aircraftOnBoard[i]->getCurrentAmmo() * _aircraftOnBoard[i]->getBaseDamage();
        aircrafts += _aircraftOnBoard[i]->getStatus() + "\n";
    }
    if (_healthPoint > 0) {
        return "HP: " + std::to_string(_healthPoint) + ", Aircraft count: " + std::to_string(_aircraftOnBoard.size())
               + ", Ammo Storage: " + std::to_string(_storeOfAmmo) + ", Total damage: " + std::to_string(totalDamage) +
               "\nAircrafts: \n" + aircrafts;

    } else {
        return "It's dead Jim :(";
    }

}
