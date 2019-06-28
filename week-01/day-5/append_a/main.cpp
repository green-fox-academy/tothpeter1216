#include <iostream>
#include <string>

int main(std::string[], int)
{
    std::string animal[] = {"koal", "pand", "zebr"};

    for (int i = 0; i < sizeof(animal)/ sizeof(animal[0]) ; ++i) {
        animal[i] = animal[i] += "a";

        std::cout << animal[i] << std::endl;

    }

    return 0;
}


// - Create an array variable named `animals`
//   with the following content: `["koal", "pand", "zebr"]`
// - Add all elements an `"a"` at the end