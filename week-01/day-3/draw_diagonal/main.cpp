#include <iostream>

int main(int argc, char *args[])
{


    int squareSide = 4;
    std::cout << "Please, type in a number." << std::endl;
    std::cin >> squareSide;

    for (int i = 0; i < squareSide + 1; ++i) {
        std::cout << "%";
    }
    std::cout << std::endl;

    for (int j = 0; j < squareSide -1; ++j) {
        std::cout << "%";
        for (int i = 0 + j; i > 0; --i) {
            std::cout << "+";
        }
        if (j < squareSide - 1) {
            std::cout << "%";
        }
        for (int k = j + 2; k < squareSide; ++k) {
            std::cout << "+";
        }
        std::cout << "%";


        std::cout << std::endl;


    }
    for (int l = 0; l < squareSide + 1; ++l) {
        std::cout << "%";
    }



    // Write a program that reads a number from the standard input, then draws a
    // square like this:
    //
    //
    // %%%%%
    // %%  %
    // % % %
    // %  %%
    // %%%%%
    //
    // The square should have as many lines as the number was

    return 0;
}