#include <iostream>
#include <string>
#include <map>

int main(int argc, char* args[])
{

    std::map <int, char > myFirstmap;

    std::cout << myFirstmap.empty() << std::endl;

    myFirstmap.insert(std::make_pair(97, 'a'));
    myFirstmap.insert(std::make_pair(98, 'b'));
    myFirstmap.insert(std::make_pair(99, 'c'));
    myFirstmap.insert(std::make_pair(65, 'A'));
    myFirstmap.insert(std::make_pair(66, 'B'));
    myFirstmap.insert(std::make_pair(67, 'C'));

    std::map<int , char>::iterator mapIterator;
    for (mapIterator = myFirstmap.begin();  mapIterator != myFirstmap.end() ; mapIterator++) {
        std::cout << mapIterator->first << std::endl;

    }

    std::map<int, char>::iterator mapInterator;
    for (mapInterator = myFirstmap.begin(); mapInterator != myFirstmap.end(); mapInterator++) {
        std::cout << mapInterator->second << std::endl;
    }

    myFirstmap[68] = 'D';

    std::cout << myFirstmap.size() << std::endl;

    std::cout << myFirstmap[99] << std::endl;

    myFirstmap.erase(97);
    std::cout << myFirstmap.size() << std::endl;
    std::cout << "" << std::endl;

    if (myFirstmap.count(100) == 1) {
        std::cout << myFirstmap[100] << " Yes it is." << std::endl;
    } else {
        std::cout << "There are no such thing!" << std::endl;
    }

    myFirstmap.clear();
    std::cout << myFirstmap.size() << std::endl;



    /*Create an empty map where the keys are integers and the values are characters
Print out whether the map is empty or not
Add the following key-value pairs to the map | Key | Value | | :-- | :---- | | 97 | a | | 98 | b | | 99 | c | | 65 | A | | 66 | B | | 67 | C |
Print all the keys
Print all the values
Add value D with the key 68
Print how many key-value pairs are in the map
Print the value that is associated with key 99
Remove the key-value pair where with key 97
Print whether there is an associated value with key 100 or not
Remove all the key-value pairs*/


    return 0;
}