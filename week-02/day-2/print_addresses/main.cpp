#include <iostream>

int main()
{
    int fiveArray[5];

    for (int i = 0; i < 5; i++) {
        std::cout << "Type in the " << i + 1 << ". number of the array." << std::endl;
        std::cin >> fiveArray[i];

    }

    for (int j = 0; j < 5; ++j) {

        std::cout << &fiveArray[j] << std::endl;
    }

    // Create a program which accepts five integers from the console (given by the user)
    // and store them in an array
    // print out the memory addresses of the elements in the array

    return 0;
}