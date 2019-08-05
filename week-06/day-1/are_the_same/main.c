#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare_words(char a[30], char b[30]){
    if(strcmp(a, b) == 0){
        return 1;
    } else{
        return 0;
    }
}



int main()
{
    char word1[20];
    char word2[20];
    printf("Type in the first word.\n");
    scanf("%s", word1);
    printf("Type in the second word\n");
    scanf("%s", word2);

    printf("%d", compare_words(word1, word2));



    // Create a program which asks for two strings and stores them
    // Create a function which takes two strings as parameters and
    // returns 1 if the two strings are the same and 0 otherwise
    // Try to erase small and uppercase sensitivity.

    return 0;
}