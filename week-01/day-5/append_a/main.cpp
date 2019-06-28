#include <iostream>

int main()
{
    std::string animal[] = {"koal", "pand", "zebr"};
    std::string addedLetter = "a";

    for (int i = 0; i < sizeof(animal)/ sizeof(animal[0]) ; ++i) {

        std::cout << animal[i] << "a" << std::endl;

    }
    
    return 0;
}


// - Create an array variable named `animals`
//   with the following content: `["koal", "pand", "zebr"]`
// - Add all elements an `"a"` at the end