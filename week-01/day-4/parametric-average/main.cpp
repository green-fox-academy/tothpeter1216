#include <iostream>


void averageCounter();

int main()
{
    averageCounter();

    return 0;
}

void averageCounter(){
    std::cout << "How many numbers do you have?" << std::endl;
    int numberOfNumbers;
    std::cin >> numberOfNumbers;
    int sumOfNumbers = 0;
    int typedNumber;
    float average;

    for (int i = 0; i < numberOfNumbers; ++i) {
        std::cout << "Type in your " << i + 1 << "th numbers." << std::endl;
        std::cin >> typedNumber;
        sumOfNumbers = sumOfNumbers + typedNumber;
    }

    std::cout << "The average of your numbers is: " << (float)sumOfNumbers / numberOfNumbers << std::endl;
}