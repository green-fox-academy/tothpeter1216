#include <iostream>
#include <map>
#include <string>

int main()
{

    std::map<std::string, float> priceList = {
            {"Milk",            1.07},
            {"Rice",            1.59},
            {"Eggs",            3.14},
            {"Cheese",          12.60},
            {"Chicken Breasts", 9.40},
            {"Apples",          2.31},
            {"Tomato",          2.58},
            {"Potato",          1.75},
            {"Onion",           1.10}

    };

    std::map<std::string, int> bobList = {
            {"Milk",            3},
            {"Rice",            2},
            {"Eggs",            2},
            {"Cheese",          1},
            {"Chicken Breasts", 4},
            {"Apples",          1},
            {"Tomato",          2},
            {"Potato",          1}

    };

    std::map<std::string, int> aliceList = {
            {"Rice",            1},
            {"Eggs",            5},
            {"Chicken Breasts", 2},
            {"Apples",          1},
            {"Tomato",          10}
    };

    //How much does Bob pay?
    float bobPay = 0;
    for (auto it = bobList.begin(); it != bobList.end(); it++) {
        for (auto it2 = priceList.begin(); it2 != priceList.end(); it2++) {
            if (it->first == it2->first) {
                bobPay += it->second * it2->second;

            }
        }
    }
    std::cout << "Bob will pay: " << bobPay << std::endl;

    //How much does Alice pay?

    float alicePay = 0;
    for (auto it = aliceList.begin(); it != aliceList.end(); it++) {
        for (auto it2 = priceList.begin(); it2 != priceList.end(); it2++) {
            if (it->first == it2->first) {
                alicePay += it->second * it2->second;

            }
        }
    }
    std::cout << "Alice will pay: " << alicePay << std::endl;

    //Who buys more Rice?
    int bobRiceCounter = 0;
    int aliceRiceCounter = 0;
    for (auto it = bobList.begin(); it != bobList.end(); it++) {
        if (it->first == "Rice") {
            bobRiceCounter += it->second;
        }
    }

    for (auto it = aliceList.begin(); it != aliceList.end(); it++) {
        if (it->first == "Rice") {
            aliceRiceCounter += it->second;
        }
    }

    if (bobRiceCounter > aliceRiceCounter) {
        std::cout << "Bob buys more rice." << std::endl;
    } else if (bobRiceCounter < aliceRiceCounter) {
        std::cout << "Alice buys more rice." << std::endl;
    } else if (bobRiceCounter == aliceRiceCounter) {
        std::cout << "Bob and Alice buy the same amount of rice." << std::endl;
    }

    //Who buys more Potato?

    int bobPotatoCounter = 0;
    int alicePotatoCounter = 0;
    for (auto it = bobList.begin(); it != bobList.end(); it++) {
        if (it->first == "Potato") {
            bobPotatoCounter += it->second;
        }
    }

    for (auto it = aliceList.begin(); it != aliceList.end(); it++) {
        if (it->first == "Potato") {
            alicePotatoCounter += it->second;
        }
    }

    if (bobPotatoCounter > alicePotatoCounter) {
        std::cout << "Bob buys more potato." << std::endl;
    } else if (bobPotatoCounter < alicePotatoCounter) {
        std::cout << "Alice buys more potato." << std::endl;
    } else if (bobPotatoCounter == alicePotatoCounter) {
        std::cout << "Bob and Alice buy the same amount of potato." << std::endl;
    }

    //Who buys more different products?
    int bobProductType = 0;
    int aliceProductType = 0;

    for (auto it = bobList.begin(); it != bobList.end(); it++) {
        bobProductType += 1;

    }

    for (auto it = aliceList.begin(); it != aliceList.end(); it++) {
        aliceProductType += 1;

    }
    if (bobProductType > aliceProductType) {
        std::cout << "Bob buys more different products." << std::endl;
    } else if (bobProductType < aliceProductType) {
        std::cout << "Alice buys more different products." << std::endl;
    } else if (bobProductType == aliceProductType) {
        std::cout << "Bob and Alice buy the same amount of different products." << std::endl;
    }


    //Who buys more products? (piece)

    int bobProductCounter = 0;
    int aliceProductCounter = 0;

    for (auto it = bobList.begin(); it != bobList.end(); it++) {
        bobProductCounter += it->second;
    }

    for (auto it = aliceList.begin(); it != aliceList.end(); it++) {
        aliceProductCounter += it->second;
    }

    if (bobProductCounter > aliceProductCounter) {
        std::cout << "Bob buys more products." << std::endl;
    } else if (bobProductCounter < aliceProductCounter) {
        std::cout << "Alice buys more products." << std::endl;
    } else if (bobProductCounter == aliceProductCounter) {
        std::cout << "Bob and Alice buy the same amount of products." << std::endl;
    }


    return 0;
}
//Create an application which solves the following problems.
//
//How much does Bob pay?
//How much does Alice pay?
//Who buys more Rice?
//Who buys more Potato?
//Who buys more different products?
//Who buys more products? (piece)