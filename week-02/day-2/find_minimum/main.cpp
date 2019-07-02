#include <iostream>

int *minimumValue(int arr[], int lengthOfArray);

int main()
{
    // Create a function which takes an array (and its length) as a parameter
    // and returns a pointer to its minimum value

    int numbers[] = {12, 4, 66, 101, 87, 3, 15};
    int lengthOfNumbers = sizeof(numbers) / sizeof(numbers[0]);
    std::cout << "Size of numbers :" << lengthOfNumbers << std::endl;

    std::cout << *(minimumValue(numbers, lengthOfNumbers)) << std::endl;


    return 0;
}

int *minimumValue(int arr[], int lengthOfArray)
{
    int minimumValue = arr[0];
    for (int i = 0; i < lengthOfArray; i++) {
        if (minimumValue > arr[i]) {
            minimumValue = arr[i];
        }

    }
    int *minimumValuePtr = &minimumValue;
    return minimumValuePtr;
}