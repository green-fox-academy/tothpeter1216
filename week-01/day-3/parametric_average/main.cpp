#include <iostream>
#include <string>

int main(int argc, char *args[])
{

    int numbers[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; ++i) {
        std::cout << "Please, type in the " << i + 1 << "th number." << std::endl;
        std::cin >> numbers[i];

    }
    int sum = 0;

    for (int j = 0; j < 5; ++j) {
        sum += numbers[j];

    }

    float avrgOfNumbers = static_cast<float >(sum) / 5;

    std::cout << "The sum of the numbers: " << sum << std::endl;
    std::cout << "The average of the numbers: " << avrgOfNumbers << std::endl;

    // Write a program that asks for a number.
    // It would ask this many times to enter an integer,
    // if all the integers are entered, it should print the sum and average of these
    // integers like:
    //
    // Sum: 22, Average: 4.4

    return 0;
}