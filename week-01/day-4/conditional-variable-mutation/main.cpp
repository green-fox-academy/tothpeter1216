#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    int a = 24;
    int out = 0;

    if (a % 2 == 0) {
        a++;
    }

    std::cout << out << std::endl;


    int b = 13;

    if(b < 10){
        std::cout << "Less!" << std::endl;
    } else if (b > 10 && b < 20){
        std::cout << "Sweet" << std::endl;
    } else{
        std::cout << "More!" << std::endl;
    }



    int c = 123;
    int credits = 100;
    bool isBonus = false;

    if (credits >= 50){
        if (isBonus == false){
            c = c - 2;
        }
    } else{
        if (isBonus == false){
            c - 1;
        }
    }

    std::cout << c << std::endl;



    int d = 8;
    int time = 120;

    std::string out3 = "";

    if (time > 200){
        out3 = "Time out";
    } else if (d % 4 == 0){
        out3 = "check";
    }else{
        out3 = "Run Forest Run!";
    }

    std::cout << out3 << std::endl;


    return 0;
}