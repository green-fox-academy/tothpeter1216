#include <iostream>
#include <string>

int main(int arg, char* args[]) {

    std::string dontCheat = "I won't cheat on the exam!";
    int sentenceCounter = 1;

    while (sentenceCounter < 100){
        std::cout << dontCheat << std::endl;
        sentenceCounter++;
    }

    return 0;
}