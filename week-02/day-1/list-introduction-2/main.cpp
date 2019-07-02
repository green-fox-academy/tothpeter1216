#include <iostream>
#include <vector>
#include <string>


int main(int argc, char* args[])
{
    std::vector<std::string> listA = {"Apple", "Avocado", "Blueberries", "Durian", "Lychee"};

    std::vector<std::string> listB = {listA};


    for (int j = 0; j < listA.size() ; ++j) {
        if (listA[j] == "Durian" ) {
            std::cout << "There is Durian" << std::endl;
        }

    }

    listB.erase(listB.begin() +3);

    listA.insert(listA.begin()+5, "Kiwifruit");

    if (listA.size() > listB.size()){
        std::cout  << "ListA is longer." << std::endl;
    } else if (listA.size() < listB.size()){
        std::cout << "ListB is longer" << std::endl;
    } else{
        std::cout << "ListA and ListB are equal." << std::endl;
    }

    int index = 0;
    for (int k = 0; k != listA.size(); ++k) {
        if (listA.at(k) == "Avocado") {
            index = k;
        }
    }
    std::cout << "Index of Avocado: " <<index << std::endl;

    int indexOfDurian = 0;
    for (int l = 0; l < listB.size(); ++l) {
        if (listB.at(l) == "Durian"){
            indexOfDurian = l;
        }
    }

    std::cout << "Index of Durian: " << indexOfDurian << std::endl;

    listB.insert(listB.begin(), {"Passion Fruit", "Pomelo"});

    std::cout << "The third element of listA is " << listA[2] << std::endl;

//Create a list ('List A') which contains the following values
//Apple, Avocado, Blueberries, Durian, Lychee
//Create a new list ('List B') with the values of List A
//Print out whether List A contains Durian or not
//Remove Durian from List B
//Add Kiwifruit to List A after the 4th element
//Compare the size of List A and List B
//Get the index of Avocado from List A
//Get the index of Durian from List B
//Add Passion Fruit and Pomelo to List B in a single statement
//Print out the 3rd element from List A
    return 0;
}