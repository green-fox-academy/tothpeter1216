#include <iostream>
#include <vector>

int main()
{
    std::vector<std::string> shhoppingList = {"eggs", "milk", "fish", "apples", "bread", "chicken"};

    for (int i = 0; i < shhoppingList.size(); ++i) {
        std::cout << shhoppingList[i] << std::endl;
    }


    bool milksearcher = false;
    for (int j = 0; j < shhoppingList.size(); ++j) {
        if (shhoppingList[j] == "milk") {
            milksearcher = true;
        }

    }
    if (milksearcher == true) {
        std::cout << "The milk is on the list" << std::endl;
    } else {
        std::cout << "The milk is not on the list" << std::endl;
    }

    bool bananaSearcher = false;
    for (int k = 0; k < shhoppingList.size(); ++k) {
        if (shhoppingList[k] == "bananas") {
            bananaSearcher = true;
        }

    }

    if (bananaSearcher == true) {
        std::cout << "The bananas are on the list." << std::endl;
    } else {
        std::cout << "The bananas are not on the list." << std::endl;
    }


    std::cout << "Hello, World!" << std::endl;
    return 0;
}


//Create a list with the following items.
//Eggs, milk, fish, apples, bread and chicken
//Create an application which solves the following problems.
//Do we have milk on the list?
//Do we have bananas on the list?