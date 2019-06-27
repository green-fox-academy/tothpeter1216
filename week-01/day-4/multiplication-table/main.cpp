#include <iostream>

int main(int argc, char* args[]) {

    int askedNumber;

    std::cout << "Please, write a number!" << std::endl;
    std::cin >> askedNumber;

    for (int multiplicationCounter = 1; multiplicationCounter <= 10; ++multiplicationCounter) {
        std::cout << askedNumber << " * " <<askedNumber * multiplicationCounter << std::endl;
    }






    return 0;
}