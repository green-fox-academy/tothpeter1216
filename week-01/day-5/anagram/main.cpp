#include <iostream>
#include <string>


int anagramCheck(std::string wordOne, std::string wordTwo);

int main(int argc, char *args[])
{
    std::string word1 = "dog";
    std::string word2 = "god";

    anagramCheck(word1, word2);

    return 0;
}

int anagramCheck(std::string wordOne, std::string wordTwo)
{
    bool anagramChecker = false;

    for (int i = 0; i < wordOne.size() / 2; ++i) {
        if (wordOne.at(i) == wordTwo.at(wordTwo.size() - i - 1)) {
            anagramChecker = true;
        } else {
            anagramChecker = false;
        }
    }
    if (anagramChecker == true) {
        std::cout << "This is an anagram." << std::endl;
    } else {
        std::cout << "This is not an anagram." << std::endl;
    }
}