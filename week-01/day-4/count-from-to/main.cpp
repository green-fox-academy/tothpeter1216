#include <iostream>

int main(int argc, char* args[]) {

    int number1;
    int number2;

    std::cout << "Write a number!" << std::endl;
    std::cin >> number1;
    std::cout << "Write a new number!" << std::endl;
    std::cin >> number2;
    if (number1 >= number2){
        std::cout << "The second number should be bigger" << std::endl;
    } else{
        for (int a = number1; a <= number2; ++a) {
            std::cout << a << std::endl;

        }
    }

    return 0;
}

// Create a program that asks for two numbers
// If the second number is not bigger than the first one it should print:
// "The second number should be bigger"
//
// If it is bigger it should count from the first number to the second by one
//
// example:
//
// first number: 3, second number: 6, should print:
//
// 3
// 4
// 5