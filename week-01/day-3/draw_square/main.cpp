#include <iostream>
#include <string>

int main(int argc, char *args[])
{

    int sideOfSquare;
    std::cout << "Please, write a number" << std::endl;
    std::cin >> sideOfSquare;

    for (int i = 0; i < sideOfSquare; ++i) {
        std::cout << "%";
    }
    std::cout << std::endl;

    for (int j = 0; j < sideOfSquare - 2; ++j) {
        std::cout << "%";
        for (int i = 0; i < sideOfSquare - 2; ++i) {
            std::cout << " ";
        }
        std::cout << "%" << std::endl;
    }
    for (int i = 0; i < sideOfSquare; ++i) {
        std::cout << "%";
    }
    std::cout << std::endl;


    // Write a program that reads a number from the standard input, then draws a
    // square like this:
    //
    //
    // %%%%%%
    // %    %
    // %    %
    // %    %
    // %    %
    // %%%%%%
    //
    // The square should have as many lines as the number was

    return 0;
}