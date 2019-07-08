#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
// Read all data from 'log.txt'.
// Each line represents a log message from a web server
// Write a function that returns an array with the unique IP adresses.
// Write a function that returns the GET / POST request ratio.


void uniqueAddresses(std::string fileLocation);

void getPostRatio(std::string fileLocation);


int main()
{


    std::cout << "The unique IP addresses are the next: " << std::endl;
    uniqueAddresses("../log.txt");

    getPostRatio("../log.txt");


    return 0;
}

void uniqueAddresses(std::string fileLocation)
{
    std::ifstream file(fileLocation);
    std::string line;
    std::vector<std::string> serverLines;

    if (file.is_open()) {
        while (std::getline(file, line)) {
            std::istringstream ss(line);
            std::string ipAdress;
            std::getline(ss, ipAdress, ' ');
            std::getline(ss, ipAdress, ' ');
            std::getline(ss, ipAdress, ' ');
            std::getline(ss, ipAdress, ' ');
            std::getline(ss, ipAdress, ' ');
            std::getline(ss, ipAdress, ' ');
            std::getline(ss, ipAdress, ' ');
            std::getline(ss, ipAdress, ' ');
            std::getline(ss, ipAdress, ' ');
            serverLines.push_back(ipAdress);
        }

        std::vector<std::string> uniqueAddresses;
        int uniqueCounter = 0;
        for (int i = 0; i < serverLines.size(); ++i) {
            bool unique = true;
            for (int j = 0; j < i; ++j) {
                if (serverLines[i] == serverLines[j])
                    unique = false;
            }
            if (unique == true) {
                uniqueAddresses.push_back(serverLines[i]);
                uniqueCounter++;
            }


        }
        for (int k = 0; k < uniqueAddresses.size(); ++k) {
            std::cout << uniqueAddresses[k] << std::endl;

        }
        file.close();


    }


}

void getPostRatio(std::string fileLocation)
{
    std::string line;
    std::ifstream file(fileLocation);
    int getCounter = 0;
    int postCounter = 0;
    if (file.is_open()) {
        while (std::getline(file, line))
            if (line.find("GET") != std::string::npos) {
                getCounter++;
            } else if (line.find("POST") != std::string::npos) {
                postCounter++;
            }
        std::cout << "The GET / POST request ratio: " << getCounter << "/" << postCounter << std::endl;

    }
    file.close();
}

