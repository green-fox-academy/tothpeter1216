#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int character_searching(char word[20], char character[1]);

int main()
{
    char word1[20];
    char char1[1];

    printf("Type in your word\n");
    scanf("%s", &word1);

    printf("Type in your character\n");
    scanf("%s", &char1);


    printf("%d", character_searching(word1, char1));


    // Create a program which asks for a string and a character and stores them
    // Create a function which takes a string and a character as a parameter and
    // if the given character is in the string, it should return the index of the
    // first appearance (in the given string) otherwise the function should return -1
    //
    // Example:
    //
    // Case 1:
    //
    // given_string = "embedded"
    // given_char = 'd'
    //
    // the function should return: 4, because this is the index of the first appearance of char 'd'
    //
    //
    // Case 2:
    //
    // given_string = "embedded"
    // given_char = 'a'
    //
    // the function should return: -1, because there is no 'a' in the word "embedded"
    //

    return 0;
}

int character_searching(char word[20], char character[1]){
    int counter = 0;
    while (character[0] != word[counter]){
        counter++;
    }

    return counter;
}