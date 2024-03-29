#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    int n = 4;

    int twoDimensionalMatrix[n][n];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == j){
                twoDimensionalMatrix[i][j] =1;
                std::cout << twoDimensionalMatrix[i][j] << std::endl;
            } else{
                twoDimensionalMatrix[i][j] = 0;
                std::cout << twoDimensionalMatrix[i][j];
            }

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