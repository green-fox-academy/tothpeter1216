#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//not perfect

// write a function which takes a string and an integer as a parameter.
// The function should return a string where the input string is repeating.
// The number of repetition is based on the value of the integer parameter.
// For example: Apple, 5 -> AppleAppleAppleAppleApple
// Try to use the least amount of memory that's possible.

char *string_repeater(char *source_word, int multiplication);

int main()
{
    char *word = NULL;


    word = (char *) malloc(256 * sizeof(char));
    strcpy(word, "alma");


    //char * word2 = NULL;
    //word2 = (char*) malloc(15*sizeof(char));

    char *word2;

    strcpy(word2, string_repeater(word,3));
    printf("%s", word2);

    free(word);
    free(word2);
    return 0;
}

char *string_repeater(char *source_word, int multiplication)
{
    char *new_word = NULL;
    int size = strlen(source_word);
    new_word = (char *) malloc(multiplication * size * sizeof(char)+1);
    int character_counter = 0;


    for (int i = 0; i < multiplication; ++i) {
        for (int j = 0; j < size; ++j) {
            new_word[character_counter + j] = source_word[j];
        }
        character_counter += size;

    }
    new_word[strlen(new_word)] = 0;


    return new_word;


}