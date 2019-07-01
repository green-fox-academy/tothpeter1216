#include <iostream>
#include <string>

std::string stringChanger(std::string randomString);
std::string reverse(const std::string& text)
{

}

int main(int argc, char* args[])
{
    std::string reversed = ".eslaf eb t'ndluow ecnetnes siht ,dehctiws erew eslaf dna eurt fo sgninaem eht fI";

    std::cout << stringChanger (reversed) << std::endl;

    // Create a method that can reverse an std:string, which is passed as the parameter
    // Use it on this reversed string to check it!
    // Try to solve this using .at() first, and optionally anything else after.
    // Hint: You might use a temporary variable to swap 2 characters or you can use std::swap function.


    return 0;
}

std::string stringChanger (std::string randomString){
std::string newText;
for (int i = randomString.length()-1; i > 0; --i) {
    newText += randomString[i];

}return newText;

}