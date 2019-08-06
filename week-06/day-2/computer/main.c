#include <stdio.h>
#include <stdint.h>

// Use the Computer struct, give values to the fields and print them out in the main!
// Use the Notebook struct, give values to the fields and print them out in the main!

struct Computer
{
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
};

typedef struct
{
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
} Notebook;

int main()
{

    struct Computer computer;
    computer.cpu_speed_GHz = 2.4;
    computer.ram_size_GB = 16;
    computer.bits = 32;

    printf("Computer:\nCPU speed: %f\nRAM size: %d\nbits: %d\n\n",
           computer.cpu_speed_GHz, computer.ram_size_GB, computer.bits);

    Notebook notebook;

    notebook.cpu_speed_GHz = 2.0;
    notebook.ram_size_GB = 10;
    notebook.bits = 32;

    printf("Notebook:\nCPU speed: %f\nRAM size: %d\nbits: %d\n\n",
           notebook.cpu_speed_GHz, notebook.ram_size_GB, notebook.bits);


    return 0;
}