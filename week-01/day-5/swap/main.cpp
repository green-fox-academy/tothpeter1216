#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    std::string abc[] = {"first", "second", "third"};

    swap(abc[0], abc[2]);

    for (int i = 0; i < sizeof(abc)/ sizeof(abc[i]); ++i) {
        std::cout << abc[i] << std::endl;

    }







    std::cout << "Hello, World!" << std::endl;
    return 0;
}


// - Create an array variable named `abc`
//   with the following content: `["first", "second", "third"]`
// - Swap the first and the third element of `abc`