#include <iostream>

int main(int argc, char* args[]) {

    int currentHours = 14;
    int currentMinutes = 34;
    int currentSeconds = 42;

    int hoursOfDay = 24;
    int minutesInHours = 60;
    int secondsInMinutes = 60;

    int remainingSeconds = ((hoursOfDay - currentHours) * minutesInHours * secondsInMinutes)
            + ((minutesInHours - currentMinutes) * secondsInMinutes )
            + secondsInMinutes - currentSeconds;

    std::cout << "Remaining seconds: " << remainingSeconds << std::endl;

    
    return 0;
}