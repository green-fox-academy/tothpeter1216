#include <stdio.h>
#include <stdlib.h>
#include "Circumference.h"


int main()
{

    double rad = 5;
    printf("Circumference: %f", circumference(rad));

    return 0;
}


//Organize the function from the previous exercise to separate .c and .h files
//Create another function which calculates the circumference of a circle
//the radius of the circle should be passed as a parameter
//the function should return the calculated circumference
//circumference = 2 * radius * PI
//this function should be in the same .c and .h files as the one which calculates the area