#include <iostream>
#include <string>
#include <fstream>
#include <vector>

int main()
{
    std::vector<char> text;
    std::ifstream myFile("../duplicated-chars.txt");
    if (!myFile.is_open()) {
        std::cout << "The file is not open." << std::endl;
    } else {
        char c;

        while (myFile.get(c)) {
            //std::cout << c <<  std::endl;
            text.push_back(c);

        }
    }
    myFile.close();

    for (int i = 0; i < text.size(); ++i) {

        if (text[i] == text[i+1]) {
            text.erase(text.begin() + i);
        }std::cout << text[i] << std::endl;
    }

    std::ofstream myFile2("../duplicated-chars2.txt");
    if (!myFile2.is_open()) {
        std::cout << "The file is not open" << std::endl;
    }else{
        for (int i = 0; i < text.size(); ++i) {
            myFile2 << text[i];
        }
    }
    myFile2.close();
    return 0;
}