#include <iostream>
#include <string>


void sum(int a);

int main(int argc, char* args[]) {

    int number = 7;
    sum(number);
    return 0;
}

void sum(int a){

    for (int i = 0; i <= a; ++i) {

        std::cout << i << std::endl;
    }
}



// Write a function called `sum` that returns the sum
// of numbers from zero to the given parameter