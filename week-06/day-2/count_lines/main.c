#include <stdio.h>
#include <string.h>

// Write a function that takes a filename as string,
// then returns the number of lines the file contains.
// It should return zero if it can't open the file

int line_counter(char address[256]);

int main ()
{
    char file_name = "../text.txt";

    printf("%d", line_counter("../text.txt"));

    return 0;
}

int line_counter(char address[256]){
    FILE* my_file = fopen(address, "r");
    if(my_file == NULL){
        printf("The file is not opened.");
        return 0;
    }
    char text[256];
    int counter = 0;
    while (fgets(text, 256, my_file)!= NULL){
        //printf("%s", text);
        counter ++;
    }
    //printf("The number of the lines: %d", counter);
    fclose(my_file);
    return counter;


}