#include <stdio.h>

int main()
{
    // Create a program that prints a few operations on two numbers: 22 and 13
    // Print the result of 13 added to 22
    // Print the result of 13 substracted from 22
    // Print the result of 22 multiplied by 13
    // Print the result of 22 divided by 13 (as a decimal fraction)
    // Print the reminder of 22 divided by 13
    // Store the results in variables and use them when you display the result


    int num1 = 22;
    int num2 = 13;

    int added = num1 + num2;
    printf("%d\n", added);

    int subs = num1 - num2;
    printf("%d\n", subs);

    int multi = num1 * num2;
    printf("%d\n", multi);

    int divided = num1 / num2;
    printf("%d\n", divided);

    int reminder = num1 % num2;
    printf("%d\n", reminder);


    return 0;
}