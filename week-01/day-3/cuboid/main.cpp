#include <iostream>

int main(int argc, char* args[]){


    double sidesOfCuboid = 10;
    double surfaceOfCuboid = 6 * sidesOfCuboid * sidesOfCuboid;
    double volumeOfCuboid = sidesOfCuboid * sidesOfCuboid * sidesOfCuboid;

    std::cout << "Surface Area: " << surfaceOfCuboid << std::endl;
    std::cout << "Volume: " << volumeOfCuboid << std::endl;


    return 0;
}