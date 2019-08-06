
#include <stdio.h>

// Write a function that takes a car as an argument and prints all it's stats
// If the car is a Tesla it should not print it's gas level

enum car_type
{
    VOLVO, TOYOTA, LAND_ROVER, TESLA
};

struct car
{
    enum car_type type;
    double km;
    double gas;
};

void car_checker(struct car *car);
const char *car_name(enum  car_type type);

int main()
{

    struct car car;
    car.type = LAND_ROVER;
    car.km = 100;
    car.gas = 7;

    car_checker(&car);
    return 0;
}

void car_checker(struct car *car)
{
    if(car->type != TESLA){
        printf("Car type: %s\nRunned km: %.2f\nGas: %.2f", car_name(car->type), car->km, car->gas);
    } else{
        printf("Car type: %s\nRunned km: %.2f\n", car_name(car->type), car->km);
    }
}

const char *car_name(enum  car_type type){
    char car_name;
    switch (type){
        case VOLVO:
            return "Volvo";
        case TOYOTA:
            return "Toyota";
        case LAND_ROVER:
            return "Land Rover";
        case TESLA:
            return "Tesla";
    }
}