#include <iostream>
#include <fstream>
#include <string>
#include <string>

int main()
{
    std::string firstLine = "This is my first line.";
    std::string secondLine = "This is my second line";
    std::ofstream file("../my-file.txt");
    if (file.is_open()) {
        file << firstLine;
        file << secondLine;
    }
    file.close();

    std::ifstream file2("../my-file.txt");
    std::string line;
    std::cout << line << std::endl;
    while (std::getline(file2, line)) {
        std::cout << line << std::endl;
    }

    // Write a program that opens a file called "my-file.txt", then prints
    // each line from the file.
    // You will have to create the file, you may use C-programming, although it is not mandatory

    return 0;
}
