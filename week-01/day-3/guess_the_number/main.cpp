#include <iostream>

int main(int argc, char *args[])
{

//UNFINISHED

    int secretNumber = 8;


    std::cout << "I have a number (1-10), try to figure it out." << std::endl;

    for (int guesNumber = 0; guesNumber != secretNumber;) {
        std::cout << "Type in a number (1-10)." << std::endl;
        std::cin >> guesNumber;

        if (secretNumber > guesNumber){
            std::cout << "The stored number is higher" << std::endl;
        } else if (secretNumber < guesNumber){
            std::cout << "The stored number is smaller" << std::endl;
        }

    }

    std::cout << "You found the number: " << secretNumber << std::endl;



    // Write a program that stores a number, and the user has to figure it out.
    // The user can input guesses, after each guess the program would tell one
    // of the following:
    //
    // The stored number is higher
    // The stried number is lower
    // You found the number: 8

    return 0;
}