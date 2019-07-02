#include <iostream>
#include <string>

int main ()
{
    // Create a pointer for each variable and print out the memory addresses of that variables
    // Print out the values of the pointers

    int a = 31;
    double b = 432.2;
    std::string name = "Bob";


    int *aPtr = &a;
    double *bPtr = &b;
    std::string *namePtr = &name;

    std::cout << "Memory address of a: " << aPtr << std::endl;
    std::cout << "Memory address of b: " << bPtr << std::endl;
    std::cout << "Memory address of name: " << namePtr << std::endl;
    return 0;
}