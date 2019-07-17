//
// Created by Peti on 2019. 07. 17..
//

//appletest.cpp
#include <gtest/gtest.h>
#include "Apple.h"



TEST(sum_check, nomalNumberTest){
std::vector<int> myNumbers = {1, 2, 3, 4};
sum(myNumbers);
int result = sum(myNumbers);
ASSERT_EQ(result, 10);

}

TEST(sum_check, zeroTest){
std::vector<int> myNumbers = {0, 2, 3, 4};
sum(myNumbers);
int result = sum(myNumbers);
ASSERT_EQ(result, 9);

}

TEST(sum_check, minusTest){
std::vector<int> myNumbers = {-10, 2, 3, 4};
sum(myNumbers);
int result = sum(myNumbers);
ASSERT_EQ(result, -1);

}