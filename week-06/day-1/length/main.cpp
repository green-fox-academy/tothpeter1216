
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int length_checker(char name[20]);


int main()
{
    char name[10];

    printf("Type in your name\n");
    scanf("%s", &name);
    printf("The length of your name: %d", length_checker(name));

    // Create a program which asks for the name of the user and stroes it
    // Create a function which takes a string as a parameter and returns the lenght of it
    // Solve this exercie with and without using string.h functions

    return 0;
}

int length_checker(char name[20]){
    return strlen(name);
}