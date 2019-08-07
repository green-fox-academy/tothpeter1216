#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// write a function which takes 2 strings as parameter, concatenates them together and returns it back.
// Test it for long and empty strings as well.
// Try to use the least amount of memory that's possible.


char *concatenater(char *word1, char *word2);

int main()
{
    char *word1 = (char *) malloc(sizeof(char));
    char *word2 = (char *) malloc(sizeof(char));
    realloc(word1, sizeof("sun"));
    realloc(word2, sizeof("glasses"));

    word1 = "sun";
    word2 = "glasses";


    char *newWord = concatenater(word1, word2);

    printf("%s", newWord);

    free(word1);
    free(word2);


    return 0;
}

char *concatenater(char *word1, char *word2)
{
    int length_of_new_world = strlen(word1) + strlen(word2);
    char *destination = (char *) malloc(length_of_new_world * sizeof(char));
    for (int i = 0; i < strlen(word1); ++i) {
        destination[i] = word1[i];
    }
    for (int j = 0; j < strlen(word2); ++j) {
        destination[strlen(word1) + j] = word2[j];
    }

    return destination;

}