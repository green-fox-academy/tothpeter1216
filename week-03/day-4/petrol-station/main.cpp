#include <iostream>
#include "Car.h"
#include "Station.h"

int main()
{

    Station station1(1000);

    Car car1(0,100);
    Car car2(10,120);
    Car car3(20,140);
    Car car4(30,160);
    Car car5(40,180);

    std::cout << "Capacity: " << car1.getCapacity() << " Gas amount: " << car1.getGasAmount() << std::endl;
    std::cout << " Gas amount: " << station1.getGasAmount() << std::endl;

    station1.fill(car1);
    station1.fill(car2);
    station1.fill(car3);
    station1.fill(car4);
    station1.fill(car5);

    std::cout << "Capacity: " << car1.getCapacity() << " Gas amount: " << car1.getGasAmount() << std::endl;
    std::cout << " Gas amount: " << station1.getGasAmount() << std::endl;






    std::cout << "Hello, World!" << std::endl;
    return 0;
}

//Create Station and Car classes
//
//Station
//
//Members:
//gasAmount
//create a constructor that initializes the gasAmount
//fill(car) -> fills 1 unit of gas until the car is on full. Every time it transfers 1 unit it should print "Filling car!" on the console. When the car is full it should print the remaining gas amount of the station
//Car
//
//Members:
//gasAmount
//capacity
//create constructor for Car with 2 arguments(gasAmount and capacity)
//car has 2 methods:
//isFull() -> returns true if capacity equals to gasAmount, false otherwise
//fill() -> increments the gasAmount by one.
//In the main function create a station and 5 cars with different amount of capacity and gas. Refill all the cars.