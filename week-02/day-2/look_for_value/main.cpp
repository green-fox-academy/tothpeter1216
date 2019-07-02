#include <iostream>

int arrayIndexFounder(int arr[], int sizeOfArr, int valueOfArr)
{
    for (int i = 0; i < sizeOfArr; ++i) {
        int indexOfArr = sizeOfArr + 1;
        if (arr[i] == valueOfArr) {
            int indexOfArr = i;
            if (indexOfArr < sizeOfArr + 1)
                return indexOfArr;


        }/*-1?
        }*/


    }

}

int main()
{

    int myArray[5] = {1, 2, 3, 4, 5};

    int lengthOfArray = sizeof(myArray) / sizeof(myArray[0]);


    std::cout << arrayIndexFounder(myArray, 5, 3) << std::endl;


    // Create a function which takes an array (and it's lenght) and a number as a parameter
    // the function should return index where it found the given value
    // if it can't find the number return -1

    //give back a pointer or a nullpointer

    return 0;
}