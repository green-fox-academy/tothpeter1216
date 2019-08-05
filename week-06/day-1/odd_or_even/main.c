#include <stdio.h>
#include <stdlib.h>


#include "OddChecker.h"


int main()
{
    int number;
    printf("Please, type in your number.\n");
    scanf("%d", &number);

    printf("%d", odd_checker(number));



    // Create a program which asks for a number and stores it
    // Create a function which takes a number as a parameter and
    // returns 1 if that number is even and returns 0 otherwise
    // (in this case 0 is an even number)

    return 0;
}

int odd_checker(int a){
    if(a%2 == 0){
        return 1;
    } else{
        return 0;
    }
}