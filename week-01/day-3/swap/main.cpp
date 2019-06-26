#include <iostream>

int main(int argc, char* args[]) {
    int a = 123;
    int b = 526;
    std::cout << "original numbers: a=" << a << " and b=" << b << std::endl;
    std::swap(a , b);
    std::cout << "new numbers: a=" << a << " and b=" << b << std::endl;
    return 0;
}