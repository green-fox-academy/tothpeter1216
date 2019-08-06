
#include <stdio.h>
#include <string.h>

// Write a program that opens a file called "my-file.txt", then prints
// each line from the file.
// You will have to create the file, for that you may use C-programming, although it is not mandatory

int main()
{

    FILE *my_file = fopen("../my-file.txt", "w");
    if (my_file == 0) {
        printf("The file is not open.");
        return 1;
    }

    fprintf(my_file, "This is the first line\nThis is the second line\nThis is the third line");

    fclose(my_file);

    FILE *my_new_file = fopen("../my-file.txt", "r");
    if (my_new_file == 0) {
        printf("The file is not opened.");
        return 2;
    }

    char text[256];
    while (fgets(text, 256, my_new_file) != NULL)
        printf("%s", text);

    fclose(my_new_file);


    return 0;
}