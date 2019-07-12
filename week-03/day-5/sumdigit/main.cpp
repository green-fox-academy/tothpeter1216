#include <iostream>


int sumOfDigits (int n){
    if (n <= 0){
        return 0;
    } else{
        int sum =0;
        sum = sum + n % 10;

        return sum + sumOfDigits(n / 10);
    }



}

int main()
{

    int n = 451;

    std::cout << sumOfDigits(n) << std::endl;


    std::cout << "Hello, World!" << std::endl;
    return 0;
}


//Given a non-negative integer n, return the sum of its digits recursively (without loops).
//
//Hint
//Mod (%) by 10 yields the rightmost digit (e.g. 126 % 10 is 6)
//
//Java, C++, C#, Python
//Divide (/) by 10 removes the rightmost digit (e.g. 126 / 10 is 12).