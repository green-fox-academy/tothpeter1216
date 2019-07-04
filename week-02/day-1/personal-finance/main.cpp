#include <iostream>
#include <string>
#include <vector>

int main()
{

    std::vector<int> listOfItems = {500, 1000, 1250, 175, 800, 120};

    int ourSpending = 0;
    for (int i = 0; i < listOfItems.size(); ++i) {
        ourSpending += listOfItems[i];

    }
    std::cout << "How much did we spend? " << ourSpending << std::endl;

    int ourGreatestExpense = 0;
    for (int j = 0; j < listOfItems.size() ; ++j) {
        if (ourGreatestExpense < listOfItems[j]){
            ourGreatestExpense = listOfItems[j];
        }
    }
    std::cout << "Which was our greatest expense? " << ourGreatestExpense << std::endl;




    int ourCheapestSpending = listOfItems[0];
    for (int k = 0; k < listOfItems.size(); ++k) {
        ourCheapestSpending = listOfItems[1];
        if (ourCheapestSpending > listOfItems[k]){
            ourCheapestSpending = listOfItems[k];
        }
    }
    std::cout << "Which was our cheapest spending? " << ourCheapestSpending << std::endl;

    int sumSpending = 0;
    for (int l = 0; l < listOfItems.size(); ++l) {
        sumSpending += listOfItems[l];


    }

    float avrgSpending = static_cast<float>(sumSpending) / listOfItems.size();
    std::cout << "What was the average amount of our spendings? " << avrgSpending << std::endl;



    return 0;
}






// We are going to represent our expenses in a list containing integers.
//
//Create a list with the following items.
//500, 1000, 1250, 175, 800 and 120
//Create an application which solves the following problems.
//How much did we spend?
//Which was our greatest expense?
//Which was our cheapest spending?
//What was the average amount of our spendings?