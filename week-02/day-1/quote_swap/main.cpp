#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> quoteSwap(std::vector<std::string> original);

int main(int argc, char* args[])
{
    std::vector<std::string> quote = {"What", "I", "do", "create,", "I", "cannot", "not", "understand."};

    std::vector<std::string> newQuote = quoteSwap(quote);

    for (int i = 0; i < newQuote.size(); ++i) {
        std::cout << newQuote[i] << " ";
    }

    // Accidentally I messed up this quote from Richard Feynman.
    // Two words are out of place
    // Your task is to fix it by swapping the right words with code
    // Create a method called quoteSwap().

    // Also, print the sentence to the output with spaces in between.

    return 0;
}

std::vector<std::string> quoteSwap(std::vector<std::string> original){
    swap(original[2], original[5]);
    return original;



}