//
// Created by Peti on 2019. 07. 17..
//

#include "Anagram.h"

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
    return anagramChecker;
}
