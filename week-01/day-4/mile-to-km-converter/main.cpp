#include <iostream>

int main(int argc, char* args[]) {

    float distanceInMiles;

    std::cout << "What is the distance? (in miles)" << std::endl;
    std::cin >> distanceInMiles;

    float distanceInKm = distanceInMiles * 1.609344;

    std::cout << "Distance in km: " << distanceInKm << std::endl;

    return 0;
}