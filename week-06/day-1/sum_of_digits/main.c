#include <stdio.h>
#include <stdlib.h>

#include "SumOfDigits.h"

int main()
{
    int num1;
    int num2;
    printf("Please, type in your numbers.\n");
    scanf("%d", &num1);
    scanf("%d", &num2);


    printf("%d", digits_checker(num1, num2));




    // Create a program which asks for two numbers and stores them
    // Create a function which takes two numbers as parameters
    // and returns 1 if the sum of the number of digits are equal and 0 otherwise
    //
    // For example:
    //
    // Case 1:
    //
    // a = 123
    // b = 321
    //
    // sum of number of digits (variable a) = 1 + 2 + 3 = 6
    // sum of number of digits (variable b) = 3 + 2 + 1 = 6
    // in this case the function should return 1
    //
    //
    // Case 2:
    //
    // a = 723
    // b = 114
    //
    // sum of number of digits (variable a) = 7 + 2 + 3 = 12
    // sum of number of digits (variable b) = 1 + 1 + 4 = 6
    // in this case the function should return 0

    return 0;
}

int digits_checker(int a, int b)
{
    int sum_a = 0;
    int sum_b = 0;
    while (a != 0) {
        sum_a = sum_a + a % 10;
        a = a / 10;
    }

    while (b != 0) {
        sum_b = sum_b + b % 10;
        b = b / 10;
    }

    if (sum_a == sum_b) {
        return 1;
    } else {
        return 0;
    }
}