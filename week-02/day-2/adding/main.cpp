#include <iostream>

int main()
{
    // Add two numbers using pointers

    int a = 20;
    int b = 17;
    int *aPtr = &a;
    int *bPtr = &b;

    int sum = *aPtr + *bPtr;

    std::cout << "The sum of the numbers :" << sum << std::endl;

    return 0;
}