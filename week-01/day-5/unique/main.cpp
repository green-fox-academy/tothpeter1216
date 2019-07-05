#include <iostream>
#include <string>

int unique(int arr[], int size);

int main()
{
    int numbers[8] = {1, 11, 34, 11, 52, 61, 1, 34};

    unique(numbers, 8);


    return 0;
}

int unique(int arr[], int size)
{
    for (int i = 0; i < size; ++i) {
        bool unique = true;
        for (int j = 0; j < i; ++j) {
            if (arr[i] == arr[j]) {
                unique = false;
            }

        }
        if (unique == true) {
            std::cout << arr[i] << std::endl;

        }

    }

}


//  Create a function that takes a list of numbers as a parameter
//  Don't forget you have pass the size of the list as a parameter as well
//  Returns a list of numbers where every number in the list occurs only once

//  Example
// int numbers[] = {1, 11, 34, 11, 52, 61, 1, 34};
// std::cout << (unique(numbers)) << std::endl;
//  should print: `[1, 11, 34, 52, 61]`






