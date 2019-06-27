#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    std::string nameOfUser;
    std::cout << "Hi! Who are you?" << std::endl;
    std::cin >> nameOfUser;
    std::cout << "Hi, " << nameOfUser << "!" << std::endl;

    return 0;
}