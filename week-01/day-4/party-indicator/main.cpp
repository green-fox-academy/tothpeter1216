#include <iostream>

int main(int argc, char* args[]) {

    int numberOfGirls;
    int numberOfBoys;

    std::cout << "How many girls will come?" << std::endl;
    std::cin >> numberOfGirls;
    std::cout << "How many boys will come?" << std::endl;
    std::cin >> numberOfBoys;

    if (numberOfGirls != 0) {
        if (numberOfBoys + numberOfGirls >= 20) {
            if (numberOfBoys == numberOfGirls) {
                std::cout << "The party is excellent!" << std::endl;
            } else if (numberOfBoys < numberOfGirls || numberOfBoys > numberOfGirls) {
                std::cout << "Quite cool party!" << std::endl;
            }
        } else{
            std::cout << "Average party..." << std::endl;
        }

    } else {
            std::cout << "Sausage party" << std::endl;
            }
    return 0;
}