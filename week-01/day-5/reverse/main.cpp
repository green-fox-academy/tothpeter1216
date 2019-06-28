#include <iostream>
#include <string>

int main(int argc, char* args[]){

    int aj[] = {3, 4, 5, 6, 7};

    for (int i = 0; i < 5 ; ++i) {
        std::cout << aj[i] << std::endl;
    }

    std::swap(aj[0],aj[4]);
    std::swap(aj[1],aj[3]);
    for (int i = 0; i < 5 ; ++i) {
        std::cout << aj[i] << std::endl;
    }

    return 0;
}


// - Create an array variable named `aj`
//   with the following content: `[3, 4, 5, 6, 7]`
// - Reverse the order of the elements in `aj`
// - Print the elements of the reversed `aj`