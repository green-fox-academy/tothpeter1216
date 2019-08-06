#include <stdio.h>
#include <string.h>

// Create a function that takes 3 parameters: a path, a word and a number
// and is able to write into a file.
// The path parameter should be a string that describes the location of the file you wish to modify
// The word parameter should also be a string that will be written to the file as individual lines
// The number parameter should describe how many lines the file should have.
// If the word is "apple" and the number is 5, it should write 5 lines
// into the file and each line should read "apple"

void file_writer(char address[256], char word[256], int number_of_lines);

int main()
{
    file_writer("../text.txt", "word", 10);


    return 0;
}

void file_writer(char address[256], char word[256], int number_of_lines){

    FILE* my_file = fopen(address, "a");
    if(my_file == NULL){
        printf("The file is not opened");
    }
    for (int i = 0; i < number_of_lines; ++i) {
        fprintf(my_file, word);
        fprintf(my_file, "\n");
    }
    fclose(my_file);
}