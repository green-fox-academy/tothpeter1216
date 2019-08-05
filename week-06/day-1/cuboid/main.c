#include <stdio.h>


int main()
{
    // Write a program that stores 3 sides of a cuboid as variables (doubles)
// You should get these variables via console input
// The program should write the surface area and volume of the cuboid like:
//
// Surface Area: 600
// Volume: 1000


    float side1;
    float side2;
    float side3;

    printf("Type in the three side of the cuboid.\n");
    scanf("%f", &side1);
    scanf("%f", &side2);
    scanf("%f", &side3);
    printf("Surface: %.2f\n", 2 * (side1 * side2 + side1 * side3 + side2 * side3));
    printf("Volume: %.2f\n", side1 * side2 * side3);


    return 0;
}