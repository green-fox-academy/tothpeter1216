#include <iostream>

int main(int argc, char* args[]) {

    int input1;
    int input2;
    int input3;
    int input4;
    int input5;

    std::cout << "Please, write a number" << std::endl;
    std::cin >> input1;
    std::cout << "Please, write a new number" << std::endl;
    std::cin >> input2;
    std::cout << "Please, write a new number" << std::endl;
    std::cin >> input3;
    std::cout << "Please, write a new number" << std::endl;
    std::cin >> input4;
    std::cout << "Please, write a new number" << std::endl;
    std::cin >> input5;

    double averageOfNumbers = ((float)input1 + (float)input2 + (float)input3 + (float)input4 + (float)input5) / 5;

    std::cout << "The average of the numbers: " << averageOfNumbers << std::endl;

    return 0;
}