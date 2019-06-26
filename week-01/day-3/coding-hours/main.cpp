#include <iostream>

int main() {
    int dailyCodingHours = 6;
    int semesterWeeks = 17;
    int semesterDays = semesterWeeks * 5;
    int semesterCodingHours = semesterDays * dailyCodingHours;
    std::cout << "coding in a semester by an attendee: " << semesterCodingHours << std::endl;
    int weeklyWorkingHours = 52;
    float semesterWorkingHours = weeklyWorkingHours * semesterWeeks;
    float percentageOfCodingHours = semesterCodingHours / semesterWorkingHours * 100;
    std::cout << "percentage of the coding hours in the semester: " << percentageOfCodingHours << std::endl;
    return 0;
}