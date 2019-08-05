#include <stdio.h>
#include <stdlib.h>

#define PI 3.14

double area_of_circle(int radius);

int main()
{

    double rad = 5;
    printf("Area: %f", area_of_circle(rad));

    return 0;
}
double area_of_circle(int radius)
{
    int area = radius * radius * PI;
    return area;
}


// define a variable called PI with the value of 3.14
// create a function which takes the radius of a circle as a parameter
// and return the area of that cirle
// area = radius * radius * PI