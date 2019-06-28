#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    int matrix[4][4] = {
            {1, 0, 0, 0},
            {0, 1, 0, 0},
            {0, 0, 1, 0},
            {0, 0, 0, 1}
    };



    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4 ; ++j) {
            std::cout << " " <<  i << j << " " << std::endl;
        }

    }

    return 0;
}


// - Create (dynamically) a two dimensional array
//   with the following matrix. Use a loop!
//   by dynamically, we mean here that you can change the size of the matrix
//   by changing an input value or a parameter or this combined
//
//   1 0 0 0
//   0 1 0 0
//   0 0 1 0
//   0 0 0 1
//
// - Print this two dimensional array to the output