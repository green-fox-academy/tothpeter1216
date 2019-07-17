//
// Created by Peti on 2019. 07. 17..
//

#include "CountLetters.h"

std::map<char, int> letterCounter(std::string word)
{
    std::map<char , int > dictionary;

    for (int i = 0; i < word.size(); ++i) {
        dictionary[word.at(i)]++;
    }

    return dictionary;
}
