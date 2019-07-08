#include <iostream>
#include <fstream>
#include <string>


int lineCounter(std::string fileName)
{
    std::ifstream file(fileName);

    std::string line;
    int counter = 0;
    if (file.is_open()) {
        while (std::getline(file, line)) {
            counter++;
        }
        file.close();
        return counter;
    } else return 0;


}

int main()
{

    std::cout << lineCounter("../file.txt") << std::endl;

    // Write a function that takes a filename as string,
    // then returns the number of lines the file contains.
    // It should return zero if it can't open the file

    return 0;
}