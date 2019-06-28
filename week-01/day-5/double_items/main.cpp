#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    int numList[5] = {3, 4, 5, 6, 7};

    for (int j = 0; j < sizeof(numList)/ sizeof(numList[0]) ; ++j) {
        numList[j] *= 2;
        std::cout << numList[j] << std::endl;

    }
    
    return 0;
}

// - Create an array variable named `numList`
//   with the following content: `[3, 4, 5, 6, 7]`
// - Double all the values in the array