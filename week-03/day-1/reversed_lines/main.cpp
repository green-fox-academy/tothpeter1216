#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main()
{

    std::ifstream myFile("../reversed-lines.txt");
    std::string lines;
    std::vector<std::string> linesHolder;


    if (!myFile.is_open()) {
        std::cout << "The file is not open." << std::endl;
    } else {
        while (getline(myFile, lines)) {
            linesHolder.push_back(lines);
        }
    }
    myFile.close();

    for (int i = 0; i < linesHolder.size(); ++i) {
        for (int j = 0; j < linesHolder[i].size()/2; ++j) {
            std::swap(linesHolder[i].at(j), linesHolder[i].at(linesHolder[i].size() - 1 - j));
        }
    }

    std::ofstream myFile2("../reversed-lines2.txt");
    if (!myFile2.is_open()){
        std::cout << "The file is not open." << std::endl;
    } else{
        for (int i = 0; i < linesHolder.size(); ++i) {
            myFile2 << linesHolder[i] << std::endl;
        }
    }
myFile2.close();



    // Create a program that decrypts the file called "reversed-lines.txt",
    // and pritns the decrypred text to the terminal window.

    return 0;
}