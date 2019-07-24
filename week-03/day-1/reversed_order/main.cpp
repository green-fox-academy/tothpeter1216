#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main()
{


    std::ifstream myFile("../reversed-order.txt");
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

    for (int i = 0; i < linesHolder.size() / 2; ++i) {
        std::swap(linesHolder[i], linesHolder[linesHolder.size() - i]);
    }

    std::ofstream myFile2("../reversed-order2.txt");
    if (!myFile2.is_open()) {
        std::cout << "The file is not open" << std::endl;
    } else {
        for (int j = 0; j < linesHolder.size(); ++j) {
            myFile2 << linesHolder[j] << std::endl;
        }

    }
    myFile2.close();



    // Create a program that decrypts the file called "reversed-order.txt",
    // and pritns the decrypred text to the terminal window.

    return 0;
}