#include <iostream>
#include <string>

int main(int argc, char* args[]) {
    int a = 3;
    a += 10;
    std::cout << a << std::endl;

    int b = 100;
    b -= 7;
    std::cout << b << std::endl;

    int c = 44;
    c *= 2;
    std::cout << c << std::endl;

    int d = 125;
    d /= 5;
    std::cout << d << std::endl;

    int e = 8;
    std::cout << e * e << std::endl;

    int f1 = 123;
    int f2 = 345;
    bool t = true;
    bool f = false;
        if (f1 > f2){
            std::cout << t << std::endl;
        }else{
            std::cout << f << std::endl;
        }



    int g1 = 350;
    int g2 = 200;
    bool tr = true;
    bool fa = false;
        if (2 * g2 > g1) {
            std::cout << "double of g2 is bigger than g1: " << tr << std::endl;
        }else{
            std::cout << "double of g2 is bigger than g1: " << fa << std::endl;
        }


    int h = 135798745;
    bool elevenDivisor = true;
    bool elevenNotDivisor = false;
        if (h % 11 == 0){
            std::cout << "11 is a divisor of h: " << elevenDivisor << std::endl;
        }else{
            std::cout << "11 is a divisor of h: " << elevenNotDivisor << std::endl;
        }



    int i1 = 10;
    int i2 = 3;
    bool trueStatement = true;
        if (i1 > i2 * i2 && i1 < i2 * i2 * i2){
            std::cout << "i1 is higher than i2 squared and smaller than i2 cubed: " << trueStatement << std::endl;
        }else{
            trueStatement = false;
            std::cout << "i1 is higher than i2 squared and smaller than i2 cubed: " << trueStatement << std::endl;
        }


    int j = 1521;
    bool rightStatement = true;
        if (j % 3 == 0 || j % 5 == 0){
            std::cout << "j is dividable by 3 or 5: " << rightStatement << std::endl;
        }else{
            rightStatement = false;
            std::cout << "j is dividable by 3 or 5: " << rightStatement << std::endl;
        }




    return 0;
}