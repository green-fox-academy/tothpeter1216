#include <iostream>
#include <string>

int main(int argc, char* args[])
{

    int ai[] = {3, 4, 5, 6, 7};
    int sumOfAi = 0;

    for (int i = 0; i < sizeof(ai)/ sizeof(ai[i]) ; ++i) {

        sumOfAi = sumOfAi + ai[i];

    }
    std::cout << sumOfAi << std::endl;
    
    return 0;
}


// - Create an array variable named `ai`
//   with the following content: `[3, 4, 5, 6, 7]`
// - Print the sum of the elements in `ai`