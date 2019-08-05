//
// Created by Peti on 2019. 08. 05..
//

#ifndef SEPARATE_CIRCUMFERENCE_H
#define SEPARATE_CIRCUMFERENCE_H

#define PI 3.14


double circumference(double radius){
    double circumference = 2*radius*PI;
    return circumference;
}




//Organize the function from the previous exercise to separate .c and .h files
//Create another function which calculates the circumference of a circle
//the radius of the circle should be passed as a parameter
//the function should return the calculated circumference
//circumference = 2 * radius * PI
//this function should be in the same .c and .h files as the one which calculates the area

#endif //SEPARATE_CIRCUMFERENCE_H
