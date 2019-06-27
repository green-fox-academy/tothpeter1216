#include <iostream>

int main() {

    int numberOfChickens;
    int numberOfPigs;

    std::cout << "How many chickens do you have?" << std::endl;
    std::cin >> numberOfChickens;
    std::cout << "How many pigs do you have?" << std::endl;
    std::cin >> numberOfPigs;

    int legsOfAnimals = ( numberOfChickens * 2 ) + ( numberOfPigs * 4 );

    std::cout << "Legs of your animals: " << legsOfAnimals << std::endl;

    return 0;
}