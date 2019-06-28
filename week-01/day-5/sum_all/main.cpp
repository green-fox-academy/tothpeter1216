#include <iostream>
#include <string>

int main(int argc, char* args[])
{

   int ai[] = {3, 4, 5, 6, 7};
   int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum = sum + ai[i];
        if (i == 4){
        std::cout << sum << std::endl;
        }

    }

    return 0;
}


// - Create an array variable named `ai`
//   with the following content: `[3, 4, 5, 6, 7]`
// - Print the sum of the elements in `ai`