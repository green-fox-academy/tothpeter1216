#include <iostream>

int main()
{


    int numbersOfIntigers;
    std::cout << "Type in a number" << std::endl;
    std::cin >> numbersOfIntigers;

    int myArray[numbersOfIntigers];

    for (int i = 0; i < numbersOfIntigers; ++i) {
        std::cout << "Please type in the " << i + 1 << ". element of the array." << std::endl;
        std::cin >> myArray[i];

    }

    int biggestNumber = 0;
    for (int k = 0; k < numbersOfIntigers; ++k) {

        if (biggestNumber < myArray[k]) {
            biggestNumber = myArray[k];

        }


    }
    int *biggestNumberPtr = &biggestNumber;
    std::cout << "The biggest number is " << biggestNumber << std::endl;
    std::cout << "The memory address of the biggest number is " << biggestNumberPtr << std::endl;

    // Create a program which first asks for a number
    // this number indicates how many integers we want to store in an array
    // and than asks for numbers till the user fills the array
    // It should print out the biggest number in the given array and the memory address of it

    return 0;
}