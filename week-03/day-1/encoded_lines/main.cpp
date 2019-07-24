#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main()
{

    std::vector<char> cHolder;
    char c;

    std::ifstream myFile("../encoded-lines.txt");

    if (!myFile.is_open()) {
        std::cout << "The file is not open." << std::endl;
    } else {
        while (myFile.get(c)) {
            cHolder.push_back(c);
        }
    }

    myFile.close();

    std::vector<char> modifiedChar;

    for (int i = 0; i < cHolder.size(); ++i) {
        //std::cout << (int)cHolder[i] +1 << std::endl;
        if (cHolder[i] != ' ' && cHolder[i] != '\n') {
            modifiedChar.push_back((int) cHolder[i] - 1);
        } else {
            modifiedChar.push_back((cHolder[i]));
        }

    }

    std::ofstream myFile2("../encoded-lines2.txt");
    if (!myFile2.is_open()) {
        std::cout << "The file is not open." << std::endl;
    } else {
        for (int j = 0; j < modifiedChar.size(); ++j) {
            std::cout << modifiedChar[j];
            myFile2 << modifiedChar[j];
        }
    }
    myFile2.close();
    // Create a program that decrypts the file called "encoded-lines.txt",
    // and pritns the decrypred text to the terminal window.

    return 0;
}