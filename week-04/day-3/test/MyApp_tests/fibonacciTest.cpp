//
// Created by Peti on 2019. 07. 17..
//

#include <gtest/gtest.h>
#include "Fibonacci.h"

TEST(fibonacci_check, test_numbers){
    fib(3);



    ASSERT_EQ(fib(3), 2);
}

TEST(fibonacci_check, test_zero){
    ASSERT_EQ(fib(0), 0);
}

TEST(fibonacci_check, test_one){
    ASSERT_EQ(fib(1), 1);
}

TEST(fibonacci_check, test_minus){
    ASSERT_EQ(fib(-1), 1);
}