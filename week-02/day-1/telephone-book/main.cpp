#include <iostream>
#include <map>

int main()
{
    std::map<std::string, std::string> telephoneBook = {
            {"William A. Lathan",   "402-247-8568"},
            {"John K. Miller",      "402-247-8568"},
            {"Hortensia E. Foster", "606-481-6467"},
            {"Amanda D. Newland",   "319-243-5613"},
            {"Brooke P. Askew",     "307-687-2982"}


    };
    //What is John K. Miller's phone number?
    std::cout << "John K. Miller's phone number: " << telephoneBook["John K. Miller"] << std::endl;

    //Whose phone number is 307-687-2982?
    std::map<std::string, std::string>::iterator mapIterator;
    for (mapIterator = telephoneBook.begin(); mapIterator != telephoneBook.end(); mapIterator++) {
        if (mapIterator->second == "307-687-2982") {
            std::cout << "The owner of the number 307-687-2982 is " << mapIterator->first << std::endl;
        }

    }


    //Do we know Chris E. Myers' phone number?

    if (telephoneBook.find("Chris E. Myers") != telephoneBook.end()) {
        std::cout << "Yes, we know." << std::endl;
    } else {
        std::cout << "No, we do not konow." << std::endl;
    }
        

    return 0;
}





//Create a map with the following key-value pairs.
//
//Name (key)	Phone number (value)
//William A. Lathan	405-709-1865
//John K. Miller	402-247-8568
//Hortensia E. Foster	606-481-6467
//Amanda D. Newland	319-243-5613
//Brooke P. Askew	307-687-2982
//Create an application which solves the following problems.
//
//What is John K. Miller's phone number?
//Whose phone number is 307-687-2982?
//Do we know Chris E. Myers' phone number?