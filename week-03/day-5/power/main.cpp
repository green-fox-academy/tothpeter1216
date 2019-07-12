#include <iostream>


int power(int base, int n)
{
    if (n <= 0) {
        return 1;
    } else {
        int powered = 1;
        powered = powered * base;
        n = n - 1;

        return powered * power(powered, n);


    }

}


int main()
{

    int base = 5;
    int n = 4;

    std::cout << power(base, n) << std::endl;

    return 0;
}



//Given base and n that are both 1 or more, compute recursively (no loops)
// the value of base to the n power, so powerN(3, 2) is 9 (3 squared).