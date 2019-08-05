#include <stdio.h>
#include <stdlib.h>

#include "EqualChecker.h"



int main()
{

    int numb1, numb2;

    printf("type in your numbers\n");
    scanf("%d", &numb1);
    scanf("%d", &numb2);

    printf("%d\n", equal_checker(numb1, numb2));


    return 0;
}

int equal_checker(int a, int b){
    if(a==b){
        return 1;
    } else{
        return 0;
    }
}
// Create a program which asks for two integers and stores them separatly
// Create a function which takes two numbers as parameters and
// returns 1 if they are equal and returns 0 otherwise