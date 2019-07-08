
#include <iostream>
#include <fstream>
#include <string>

// Create a function that takes 3 parameters: a path, a word and a number
// and is able to write into a file.
// The path parameter should be a string that describes the location of the file you wish to modify
// The word parameter should also be a string that will be written to the file as individual lines
// The number parameter should describe how many lines the file should have.
// If the word is "apple" and the number is 5, it should write 5 lines
// into the file and each line should read "apple"


void fileMaker(std::string filename, std::string word, int numberOfLines);

int main() {

    std::string fileLocation;
    std::string word;
    int lines;

    std::cout << "What is the location of your file?" << std::endl;
    std::cin >> fileLocation;
    std::cout << "What is your word?" << std::endl;
    std::cin >> word;
    std::cout << "How many lines do you want?" << std::endl;
    std::cin >> lines;



    std::string apple = "apple";
    fileMaker(fileLocation, word, lines);





    return 0;
}

void fileMaker(std::string filename, std::string word, int numberOfLines){
    std::ofstream file(filename);
    if (file.is_open()){
        for (int i = 0; i < numberOfLines; ++i) {
            file << word << std::endl;

        }
    }file.close();
}