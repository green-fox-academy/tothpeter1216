#include <iostream>

int main(int argc, char* args[]){

    int number;
    std::cout << "Write a number!" << std::endl;
    std::cin >> number;

    for (int i = 0; i < number; ++i) {
        for (int j = 0; j < i; ++j) {
            std::cout << "*";
        }
        std::cout << "*" << std::endl;

    }


    return 0;
}

// Write a program that reads a number from the standard input, then draws a
// triangle like this:
//
// *
// **
// ***
// ****
//
// The triangle should have as many lines as the number was