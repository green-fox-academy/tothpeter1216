#include <iostream>

int main(int argc, char* args[]) {
    int pyramidLine;
    std::cout << "Please, write a number" << std::endl;
    std::cin >> pyramidLine;
    for (int i = 0; i < pyramidLine; ++i) {
        for (int j = (pyramidLine - i); j > 0; --j) {
            std::cout << " ";

        }

        for (int k = 0; k < i; ++k) {
            std::cout << "*";

        }
        for (int k = 0; i >= k; ++k) {
            std::cout << "*";

        }
        for (int j = (pyramidLine - i); j > 0; --j) {
            std::cout << " ";

        }
        std::cout << std::endl;


    }
    for (int i = pyramidLine; i >= 0; --i) {
        for (int j = (pyramidLine - i); j > 0; --j) {
            std::cout << " ";

        }

        for (int k = 0; k < i; ++k) {
            std::cout << "*";

        }
        for (int k = 0; i >= k; ++k) {
            std::cout << "*";

        }
        for (int j = (pyramidLine - i); j > 0; --j) {
            std::cout << " ";

        }
        std::cout << std::endl;


    }





    // Write a program that reads a number from the standard input, then draws a
    // diamond like this:
    //
    //
    //    *
    //   ***
    //  *****
    // *******
    //  *****
    //   ***
    //    *
    //
    // The diamond should have as many lines as the number was

    return 0;
}