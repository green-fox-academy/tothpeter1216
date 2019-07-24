#include <iostream>
#include <fstream>
#include <string>

// Write a function that reads all lines of a file and writes the read lines to an other file (a.k.a copies the file)
// It should take the filenames as parameters
// It should return a boolean that shows if the copy was successful




bool fileCopy(std::string firstFile, std::string secondFile){
    std::ifstream file(firstFile);
    std::ofstream file2(secondFile);
    std::string textCopy;
    if (file.is_open() && file2.is_open()){
        while (std::getline(file, textCopy))
            file2 << textCopy << " ";
        return true;
    } else return false;
}

int main() {

    std::string firstFile;
    std::string secondFile;

    std::cout << "What is the location of your first file?" << std::endl;
    std::cin >> firstFile;
    std::cout << "Where do you want to copy?" << std::endl;
    std::cin >> secondFile;

    fileCopy(firstFile, secondFile);




    return 0;
}