#include <iostream>
#include <string>


void palindrome(std::string word1)
{
    std::string word2 = word1;
    int lengthOfWord = word1.size();

    for (int i = 0; i < lengthOfWord; ++i) {
        word2.at(lengthOfWord - i - 1) = word1.at(i);
    }
    std::cout << word1 + word2 << std::endl;
}

int main()
{
    std::string original;
    std::cout << "Type in a word, I will show you the palindrome of this word." << std::endl;
    std::cin >> original;
    palindrome(original);

    return 0;
}