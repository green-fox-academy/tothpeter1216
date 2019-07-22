#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

std::vector<std::string> filter(const std::vector<std::string>& firstVector, const std::vector<std::string>& secondVector){
    bool isNotCandy = true;
    std::vector<std::string> filteredList;
    for (const auto & i : firstVector) {
        for (const auto & j : secondVector) {
            if (i == j){
                isNotCandy = false;

            }
        }
        if (!isNotCandy){
            filteredList.push_back(i);

        }
        isNotCandy = true;
    }
    return filteredList;



}



int main(int argc, char* args[])
{
    const std::vector<std::string> sweets = {"Cupcake", "Brownie"};
    std::vector<std::string> list = {"Cupcake", "Carrot", "Bread", "Brownie", "Lemon"};

    // Accidentally we added "Carrot", "Lemon" and "Bread" to the list.
    // Your task is to remove them from the list. "sweets" vector can help you with this
    // You should erase every element from "list" vector that is not in "sweets" vector.
    // No, don't just remove the lines
    // Create a method called filter() which takes the two lists as parameters.

    std::vector<std::string> filteredList = filter(list, sweets);

    // Expected output: Cupcake Brownie
    for (const auto & i : filteredList) {
        std::cout << i << " ";
    }

    return 0;
}