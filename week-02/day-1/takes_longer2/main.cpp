#include <iostream>
#include <string>

int main(int argc, char* args[])
{
    std::string quote("Hofstadter's Law: It you expect, even when you take into account Hofstadter's Law.");

    quote.replace (20, 0, " always takes longer than");

    // When saving this quote a disk error has occured. Please fix it.
    // Add "always takes longer than" to the quote between the words "It" and "you" using the replace function

    std::cout << quote << std::endl;
    return 0;
}