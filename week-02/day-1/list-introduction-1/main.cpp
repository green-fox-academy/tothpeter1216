#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* args[])
{
    std::vector<std::string> nameList;
    std::cout << nameList.size() << std::endl;
    nameList.push_back("William");
    std::cout << nameList.size() << std::endl;
    std::cout << nameList.empty() << std::endl;
    nameList.push_back("John");
    nameList.push_back("Amanda");
    std::cout << nameList.size() << std::endl;
    std::cout << nameList[2] << std::endl;

    for (int i = 0; i < nameList.size(); ++i) {
        std::cout << nameList[i] << std::endl;
    }

    nameList.erase(nameList.begin() +1);

    for (int j = nameList.size(); j >= 0; j--) {
        std::cout << nameList[j] << std::endl;

    }

    nameList.clear();
    std::cout << nameList.size() << std::endl;
    

    return 0;
}