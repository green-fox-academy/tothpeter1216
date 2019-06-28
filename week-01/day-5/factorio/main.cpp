#include <iostream>
#include <string>

int factorio(int a);


int main(int argc, char* args[]) {

    int n = 3;
    int additionalNumber = factorio(n);
    std::cout << additionalNumber << std::endl;

    return 0;
}

int factorio(int a){
    int counter = 1;
    for (int i = 1; i <= a; ++i) {
        counter = counter*i;
        if (i == a) {
            return counter;
        }
    }}





//create a function called factorio
// it should claculate it's input's factorial
// it should not return it, but take an additional integer parameter
// and overwrite its value
