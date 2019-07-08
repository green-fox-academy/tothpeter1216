#include <iostream>
#include <fstream>
#include <string>

int main() {


    std::ofstream file("../my-file.txt");

    if (file.is_open()){
        file << "Peter Toth" << std::endl;

    }
    file.close();
    // Open a file called "my-file.txt"
    // Write your name in it as a single line

    return 0;
}