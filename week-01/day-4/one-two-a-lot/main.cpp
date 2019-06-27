#include <iostream>

int main(int argc, char* args[]) {

    int randomNumber;

    std::cout << "Write a number" << std::endl;
    std::cin >> randomNumber;

    if (randomNumber <= 0){
        std::cout << "Not enough" << std::endl;
    }else if ( randomNumber == 1 ){
        std::cout << "One" << std::endl;
    } else if (randomNumber == 2){
        std::cout << "Two" << std::endl;
    } else{
        std::cout << "A lot" << std::endl;
    }

    return 0;
}