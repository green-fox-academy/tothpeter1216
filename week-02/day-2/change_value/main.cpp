#include <iostream>

int main ()
{
    // Change the value of the variable called 'temperature' using a pointer
    // (you have to create the pointer first)

    float temperature = 21.3;
    float *temperaturePtr = &temperature;
    *temperaturePtr = 25;

    std::cout << "New value of temperature: " <<temperature << std::endl;

    return 0;
}