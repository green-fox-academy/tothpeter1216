#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <map>

int main()
{
    // Create a method that find the 5 most common lottery numbers in lottery.csv

    std::ifstream myFile("../lottery.csv");
    if (!myFile.is_open()) {
        std::cout << "The file is not open." << std::endl;
    }
    std::string line;
    std::vector<std::string> lottoryNumbers;
    while (std::getline(myFile, line)) {
        std::istringstream ss(line);
        std::string lottory;
        std::getline(ss, lottory, ';');
        std::getline(ss, lottory, ';');
        std::getline(ss, lottory, ';');
        std::getline(ss, lottory, ';');
        std::getline(ss, lottory, ';');
        std::getline(ss, lottory, ';');
        std::getline(ss, lottory, ';');
        std::getline(ss, lottory, ';');
        std::getline(ss, lottory, ';');
        std::getline(ss, lottory, ';');
        std::getline(ss, lottory, ';');
        std::getline(ss, lottory, ';');
        lottoryNumbers.push_back(lottory);
        std::getline(ss, lottory, ';');
        lottoryNumbers.push_back(lottory);
        std::getline(ss, lottory, ';');
        lottoryNumbers.push_back(lottory);
        std::getline(ss, lottory, ';');
        lottoryNumbers.push_back(lottory);
        std::getline(ss, lottory, ';');
        lottoryNumbers.push_back(lottory);
    }

    std::map<std::string, int> myMap;
    for (int i = 0; i < lottoryNumbers.size(); ++i) {
        //std::cout << lottoryNumbers[i] << std::endl;
        ++myMap[lottoryNumbers[i]];
    }
    int maxNumber = 0;
    std::string commonLottoryNumber = "1";

    for (auto it = myMap.begin(); it != myMap.end(); ++it) {
        //std::cout<< it->first << " : " << it->second << std::endl;
        if (maxNumber < it->second) {
            maxNumber = it->second;
            commonLottoryNumber = it->first;
        }
    }
    std::cout << " The most common lottory number: " << commonLottoryNumber << " (" << maxNumber << " times)"
              << std::endl;

    myMap.erase(commonLottoryNumber);
    maxNumber = 0;
    commonLottoryNumber = "1";

    for (auto it = myMap.begin(); it != myMap.end(); ++it) {
        //std::cout<< it->first << " : " << it->second << std::endl;
        if (maxNumber < it->second) {
            maxNumber = it->second;
            commonLottoryNumber = it->first;
        }
    }
    std::cout << " The second most common lottory number: " << commonLottoryNumber << " (" << maxNumber << " times)"
              << std::endl;

    myMap.erase(commonLottoryNumber);
    maxNumber = 0;
    commonLottoryNumber = "1";

    for (auto it = myMap.begin(); it != myMap.end(); ++it) {
        //std::cout<< it->first << " : " << it->second << std::endl;
        if (maxNumber < it->second) {
            maxNumber = it->second;
            commonLottoryNumber = it->first;
        }
    }
    std::cout << " The third most common lottory number: " << commonLottoryNumber << " (" << maxNumber << " times)"
              << std::endl;

    myMap.erase(commonLottoryNumber);
    maxNumber = 0;
    commonLottoryNumber = "1";

    for (auto it = myMap.begin(); it != myMap.end(); ++it) {
        //std::cout<< it->first << " : " << it->second << std::endl;
        if (maxNumber < it->second) {
            maxNumber = it->second;
            commonLottoryNumber = it->first;
        }
    }
    std::cout << " The 4th most common lottory number: " << commonLottoryNumber << " (" << maxNumber << " times)"
              << std::endl;

    myMap.erase(commonLottoryNumber);
    maxNumber = 0;
    commonLottoryNumber = "1";

    for (auto it = myMap.begin(); it != myMap.end(); ++it) {
        //std::cout<< it->first << " : " << it->second << std::endl;
        if (maxNumber < it->second) {
            maxNumber = it->second;
            commonLottoryNumber = it->first;
        }
    }
    std::cout << " The 5th most common lottory number: " << commonLottoryNumber << " (" << maxNumber << " times)"
              << std::endl;


    return 0;
}