#include <iostream>

void swapFunction(int *firstNumberPtr, int *secondNumberPtr)
{
    int swapNumber = *firstNumberPtr;
    *firstNumberPtr = *secondNumberPtr;
    *secondNumberPtr = swapNumber;
}

int main()
{
    // Create a function which swaps the values of 'a' and 'b'
    // This time use a void function and pointers

    int a = 10;
    int b = 316;
    int *aPtr = &a;
    int *bPtr = &b;

    std::cout << aPtr << "and the" << bPtr << std::endl;
    swapFunction(aPtr, bPtr);
    std::cout << aPtr << "and the" << bPtr << std::endl;

    std::cout << a << " and " << b << std::endl;

    swapFunction(aPtr, bPtr );
    std::cout << a << " and " << b << std::endl;

    return 0;
}