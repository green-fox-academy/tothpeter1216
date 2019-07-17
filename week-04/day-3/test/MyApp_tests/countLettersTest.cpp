//
// Created by Peti on 2019. 07. 17..
//

#include <gtest/gtest.h>
#include "CountLetters.h"
#include <map>

TEST(letterCounter_check, test_simpleWord){
    std::string myWord = "dog";
    letterCounter(myWord);

    std::map<char, int > countedLetters = {
            {'d', 1},
            {'o', 1},
            {'g', 1},
    };


ASSERT_EQ(letterCounter(myWord), countedLetters);
}

TEST(letterCounter_check, test_difficultWord){
    std::string myWord = "gagaga";
    letterCounter(myWord);

    std::map<char, int > countedLetters = {
            {'g', 3},
            {'a', 3}
    };


    ASSERT_EQ(letterCounter(myWord), countedLetters);
}

TEST(letterCounter_check, test_oneLetterWord){
    std::string myWord = "aaaaaaa";
    letterCounter(myWord);

    std::map<char, int > countedLetters = {
            {'a', 7}
    };


    ASSERT_EQ(letterCounter(myWord), countedLetters);
}