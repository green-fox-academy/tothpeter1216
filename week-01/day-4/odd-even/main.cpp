#include <iostream>

int main(int argc, char* args[]) {

    int randomNumber;
    std::cout << "Write a number" << std::endl;
    std::cin >> randomNumber;

    int oddOrEvent = randomNumber % 2;
            if (oddOrEvent == 0) {
                std::cout << "The number is event." << std::endl;
            } else{
                std::cout << "The number is odd" << std::endl;
            }

    return 0;
}