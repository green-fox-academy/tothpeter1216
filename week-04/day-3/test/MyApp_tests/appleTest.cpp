//appletest.cpp
#include <gtest/gtest.h>
#include "Apple.h"

TEST(apple_check, test_apple){
ASSERT_EQ(getApple(), "apple");
}

