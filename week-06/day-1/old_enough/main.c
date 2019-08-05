#include <stdio.h>
#include <stdlib.h>

#include "ageChecker.h"

int main()
{

    int age;
    printf("Type in your age\n");
    scanf("%d", &age);


    if (age_checker(age)) {
        printf("You are enough old.");
    } else {
        printf("You can not buy alcohol");
    }


    return 0;
}

int age_checker(int age)
{
    if (age >= 18) {
        return 1;
    } else {
        return 0;
    }
}



// Create a program which asks for the age of the user and stores it
// Create a function which takes that age as a parameter and returns if the user is
// old enough to buy himself alcohol in Hungary