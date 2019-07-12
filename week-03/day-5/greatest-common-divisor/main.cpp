#include <iostream>


int commonDiviser(int a, int b) {
    if (a <= 0 || b <= 0)
        return 0;
    else if (a == b)
        return a;
    else if (a > b)
        return commonDiviser(a - b, b);
    else return commonDiviser(a, b - a);
}


int main()
{
    int a = 10;
    int b = 14;

    std::cout << commonDiviser(a, b) << std::endl;





    std::cout << "Hello, World!" << std::endl;
    return 0;
}


//Find the greatest common divisor of two numbers using recursion.