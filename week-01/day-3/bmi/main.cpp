#include <iostream>

int main(int argc, char* args[]) {
    double massInKg = 81.2;
    double heightInM = 1.78;
    double bmi = massInKg / heightInM;
    std::cout << "Body mass index (BMI): " << bmi << std::endl;
    return 0;
}