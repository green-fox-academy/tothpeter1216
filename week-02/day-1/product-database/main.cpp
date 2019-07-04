#include <iostream>
#include <map>
#include <string>

int main()
{

    std::map<std::string, int> priceList = {
            {"Eggs",    200},
            {"Milk",    200},
            {"Fish",    400},
            {"Apples",  150},
            {"Bread",   50},
            {"Chicken", 550},
    };

    //How much is the fish?
    std::cout << "The fish is: " << priceList["Fish"] << std::endl;

    //What is the most expensive product?
    std::map<std::string, int>::iterator expensiveIt;
    int expensiveFood = 0;
    for (expensiveIt = priceList.begin(); expensiveIt != priceList.end(); expensiveIt++) {
        if (expensiveFood < expensiveIt->second) {
            expensiveFood = expensiveIt->second;
        }

    }

    for (auto it = priceList.begin(); it != priceList.end(); it++) {
        if (expensiveFood == it->second) {
            std::cout << "The most expensive product is: " << it->first << std::endl;
        }
    }

    //What is the average price?
    int sumOfPrices = 0;
    int sizeOfTheList = priceList.size();
    for (auto it = priceList.begin(); it != priceList.end(); it++) {
        sumOfPrices += it->second;

    }
    float avrPrice = static_cast<float > (sumOfPrices) / sizeOfTheList;
    std::cout << "The average price is " << avrPrice << "." << std::endl;

//How many products' price is below 300?
    int productsBelow300 = 0;
    for (auto it = priceList.begin(); it != priceList.end(); it++) {
        if (it->second < 300) {
            productsBelow300 += 1;
        }

    }

    std::cout << "There ara " << productsBelow300 << " products below 300." << std::endl;

//Is there anything we can buy for exactly 125?
    bool price125 = false;
    for (auto it = priceList.begin(); it != priceList.end(); it++) {
        if (it->second == 125) {
            price125 = true;
        }


    }
    if (price125 == true) {
        std::cout << "There is product for 125." << std::endl;
    } else {
        std::cout << "There is not product for 125" << std::endl;
    }


    //What is the cheapest product?
    int cheapestPrice;
    std::string cheapestProduct;


    for (auto it = priceList.begin(); it != priceList.end(); it++) {
        cheapestProduct = it->second;
    }

    for (auto it = priceList.begin(); it != priceList.end(); it++) {

        if (it->second < cheapestPrice) {
            cheapestPrice = it->second;
            cheapestProduct = it->first;
        }

    }

    std::cout << "The cheapest product is " << cheapestProduct << "." << std::endl;

    return 0;
}








//Create a map with the following key-value pairs.
//
//Product name (key)	Price (value)
//Eggs	200
//Milk	200
//Fish	400
//Apples	150
//Bread	50
//Chicken	550
//Create an application which solves the following problems.
//
//How much is the fish?
//What is the most expensive product?
//What is the average price?
//How many products' price is below 300?
//Is there anything we can buy for exactly 125?
//What is the cheapest product?