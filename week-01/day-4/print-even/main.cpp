#include <iostream>
#include <string>

int main(int argc, char* args[]) {


    for (int numberCounter = 1; numberCounter < 500; ++numberCounter) {
        if(numberCounter % 2 == 0){
            std::cout << numberCounter << std::endl;
        }
    }

    return 0;
}