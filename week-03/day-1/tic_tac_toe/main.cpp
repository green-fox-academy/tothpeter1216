#include <iostream>
#include <fstream>
#include <string>
#include <vector>

std::string ticTacResult(std::string fileAddress);


int main()
{
    // Write a function that takes a filename as string,
    // open and read it. The file data represents a tic-tac-toe
    // game result. Return 'X'/'O'/'draw' based on which player
    // has winning situation.



    std::cout << ticTacResult("../win-o.txt");
    // should print O

      std::cout << ticTacResult("../win-x.txt");
    // should print X

    std::cout << ticTacResult("../draw.txt");
    // should print draw

    return 0;
}

std::string ticTacResult(std::string fileAddress){

    std::ifstream myFile(fileAddress);

    std::vector<std::string> allLine;
    if (!myFile.is_open()) {
        std::cout << "The file is not open." << std::endl;
    } else {
        std::string lines;

        while (getline(myFile, lines)) {
            allLine.push_back(lines);
        }
    }

    if (allLine[0].at(0) == 'X' && allLine[0].at(0) == allLine[0].at(1) && allLine[0].at(1) == allLine[0].at(2)
        || allLine[1].at(0) == 'X' && allLine[1].at(0) == allLine[1].at(1) && allLine[1].at(1) == allLine[1].at(2)
        || allLine[2].at(0) == 'X' && allLine[2].at(0) == allLine[2].at(1) && allLine[2].at(1) == allLine[2].at(2)
        || allLine[0].at(0) == 'X' && allLine[0].at(0) == allLine[1].at(0) && allLine[1].at(0) == allLine[2].at(0)
        || allLine[0].at(1) == 'X' && allLine[0].at(1) == allLine[1].at(1) && allLine[1].at(1) == allLine[2].at(1)
        || allLine[0].at(2) == 'X' && allLine[0].at(2) == allLine[1].at(2) && allLine[1].at(2) == allLine[2].at(2)
        || allLine[0].at(0) == 'X' && allLine[0].at(0) == allLine[1].at(1) && allLine[1].at(1) == allLine[2].at(2)
        || allLine[0].at(2) == 'X' && allLine[0].at(2) == allLine[1].at(1) && allLine[1].at(1) == allLine[2].at(0)) {
        return "X won.\n";
    } else if (allLine[0].at(0) == 'O' && allLine[0].at(0) == allLine[0].at(1) && allLine[0].at(1) == allLine[0].at(2)
               || allLine[1].at(0) == 'O' && allLine[1].at(0) == allLine[1].at(1) && allLine[1].at(1) == allLine[1].at(2)
               || allLine[2].at(0) == 'O' && allLine[2].at(0) == allLine[2].at(1) && allLine[2].at(1) == allLine[2].at(2)
               || allLine[0].at(0) == 'O' && allLine[0].at(0) == allLine[1].at(0) && allLine[1].at(0) == allLine[2].at(0)
               || allLine[0].at(1) == 'O' && allLine[0].at(1) == allLine[1].at(1) && allLine[1].at(1) == allLine[2].at(1)
               || allLine[0].at(2) == 'O' && allLine[0].at(2) == allLine[1].at(2) && allLine[1].at(2) == allLine[2].at(2)
               || allLine[0].at(0) == 'O' && allLine[0].at(0) == allLine[1].at(1) && allLine[1].at(1) == allLine[2].at(2)
               || allLine[0].at(2) == 'O' && allLine[0].at(2) == allLine[1].at(1) && allLine[1].at(1) == allLine[2].at(0)){
        return "O won\n";
    } else{
        return "Draw\n";
    }


}