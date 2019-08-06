
#include <stdio.h>
#include <string.h>

// Open a file called "my-file.txt"
// Write your name in it as a single line

int main ()
{

    FILE* my_file = fopen("../my-file.txt", "w");
    if(my_file == NULL){
        printf("The file is not opoened");
        return 1;
    }

    fprintf(my_file, "Peti");

    fclose(my_file);

    return 0;
}