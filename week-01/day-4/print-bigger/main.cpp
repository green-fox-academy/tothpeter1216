#include <iostream>

int main(int argc, char*[]) {

    int number1;
    int number2;

    std::cout << "Please, write a number" << std::endl;
    std::cin >> number1;
    std::cout << "Please, write a new number" << std::endl;
    std::cin >> number2;

    if (number1 > number2){
        std::cout << number1 << std::endl;
    } else if (number1 < number2){
        std::cout << number2 << std::endl;
    }

    return 0;
}