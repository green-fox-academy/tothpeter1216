#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    int p1[] = {1, 2, 3};
    int p2[] = {4, 5};
    int sizeOfP1 = sizeof(p1)/ sizeof(p1[0]);
    int sizeOfP2 = sizeof(p2)/ sizeof(p2[0]);

    if (sizeOfP1 < sizeOfP2){
        std::cout << "p2 is longer" << std::endl;
    }

    return 0;
}


// - Create an array variable named `p1`
//   with the following content: `[1, 2, 3]`
// - Create an array variable named `p2`
//   with the following content: `[4, 5]`
// - Print "p2 is longer" if `p2` has more elements than `p1`