#include <iostream>
#include <map>
#include <string>

int main()
{
    std::map<std::string, int> priceList = {
            {"Eggs", 200},
            {"Milk", 200},
            {"Fish", 400},
            {"Apples", 150},
            {"Bread", 50},
            {"Chicken", 550},
    };

    //Which products cost less than 201? (just the name)
    std::cout << " The next products are less than 201:" << std::endl;

    for (auto it = priceList.begin(); it != priceList.end(); it++) {
        if (it->second < 201){
            std::cout << "- " << it->first << std::endl;
        }

    }

    //Which products cost more than 150? (name + price)
    std::cout << "The next products ara more than 150: " << std::endl;

    for (auto it = priceList.begin(); it != priceList.end() ; it++) {
        if (it->second > 150){
        std::cout << "- " <<  it->first << " : " << it->second << std::endl;
        }

    }
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
//Which products cost less than 201? (just the name)
//Which products cost more than 150? (name + price)