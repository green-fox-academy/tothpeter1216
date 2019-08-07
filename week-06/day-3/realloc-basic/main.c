#include <stdio.h>
#include <stdlib.h>

// Prompt the user to enter a number. -> This number will be X.
// Allocate memory for X numbers.
// Prompt the user to enter X numbers.
// Allocate memory for Y numbers, which is the sum of the X numbers.
// Fill that array with from 1 to Y, then print them.

int main()
{
    int *pointer = NULL;

    int x;
    printf("Please, type in a number");
    scanf("%d", &x);
    //printf("%d", x);
    pointer = (int *) malloc(x * sizeof(int));
    printf("Please, type in %d numbers", x);
    int y = 0;

    for (int i = 0; i < x; ++i) {
        scanf("%d", &pointer[i]);
    }


    for (int j = 0; j < x; ++j) {
        y += pointer[j];
    }

    realloc(pointer, y);

    for (int l = 0; l < y; ++l) {
        pointer[l] = l;
        printf("%d\n", pointer[l]);
    }

    free(pointer);

    return 0;
}