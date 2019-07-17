//
// Created by Peti on 2019. 07. 17..
//

#include <gtest/gtest.h>
#include "Anagram.h"

TEST(anagram_check, test_anagram){
    std::string word = "god";
    std::string word2 = "dog";
    ASSERT_EQ(anagramCheck(word, word2), true);
}

TEST(anagram_check, test_notAnagram){
    std::string word = "god";
    std::string word2 = "bab";
    ASSERT_EQ(anagramCheck(word, word2), false);
}

TEST(anagram_check, test_sentence){
    std::string word = "god";
    std::string word2 = "I am here";
    ASSERT_EQ(anagramCheck(word, word2), false);
}

TEST(anagram_check, test_firstAndLastLetterAreTheSame){
    std::string word = "god";
    std::string word2 = "ggggggdddddddd";
    ASSERT_EQ(anagramCheck(word, word2), false);
}

TEST(anagram_check, test_firstAndLastLetterAndLength){
    std::string word = "god";
    std::string word2 = "ggd";
    ASSERT_EQ(anagramCheck(word, word2), false);
}
