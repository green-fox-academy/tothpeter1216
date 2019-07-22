#include <iostream>
#include <string>
#include <map>

int main()
{
    std::map <std::string, std::string> introductionMap = {
            {"978-1-60309-452-8", "A Letter to Jo"},
            {"978-1-60309-459-7", "Lupus"},
            {"978-1-60309-444-3", "Red Panda and Moon Bear"},
            {"978-1-60309-461-0", "The Lab"},
    };


    std::map<std::string, std::string>::iterator mapIterator;
    for (mapIterator = introductionMap.begin(); mapIterator != introductionMap.end(); mapIterator++) {
        std::cout << mapIterator->second << " (ISBN: ";
        std::cout << mapIterator->first << ")" << std::endl;

    }

    introductionMap.erase("978-1-60309-444-3");
    introductionMap.erase("The Lab");


    mapIterator = introductionMap.begin();

    for (mapIterator = introductionMap.begin(); mapIterator != introductionMap.end(); mapIterator++) {
        if (mapIterator->second == "The Lab") {
            introductionMap.erase(mapIterator);

        }


        std::cout << mapIterator->second << " (ISBN: ";
        std::cout << mapIterator->first << ")" << std::endl;
    }

    introductionMap.insert(std::make_pair("978-1-60309-450-4", "They Called Us Enemy"));
    introductionMap.insert(std::make_pair("978-1-60309-453-5", "Why Did We Trust Him?"));

    mapIterator = introductionMap.begin();
    for (mapIterator = introductionMap.begin(); mapIterator != introductionMap.end(); mapIterator++) {
        if (mapIterator->first == "478-0-61159-424-8") {
            std::cout << "There is an associated value." << std::endl;

        }

    }

    std::cout << "The value of the key is " << introductionMap["978-1-60309-453-5"] << std::endl;


    return 0;
}

//Create a map where the keys are strings and the values are strings with the following initial values
//
//Key	Value
//978-1-60309-452-8	A Letter to Jo
//978-1-60309-459-7	Lupus
//978-1-60309-444-3	Red Panda and Moon Bear
//978-1-60309-461-0	The Lab
//Print all the key-value pairs in the following format
//
//A Letter to Jo (ISBN: 978-1-60309-452-8)
//Lupus (ISBN: 978-1-60309-459-7)
//Red Panda and Moon Bear (ISBN: 978-1-60309-444-3)
//The Lab (ISBN: 978-1-60309-461-0)
//Remove the key-value pair with key 978-1-60309-444-3
//
//Remove the key-value pair with value The Lab
//
//Add the following key-value pairs to the map
//
//Key	Value
//978-1-60309-450-4	They Called Us Enemy
//978-1-60309-453-5	Why Did We Trust Him?
//Print whether there is an associated value with key 478-0-61159-424-8 or not
//
//Print the value associated with key 978-1-60309-453-5