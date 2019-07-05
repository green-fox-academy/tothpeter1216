#include <iostream>

int main(int argc, char *args[])
{


    for (int i = 0; i < 4; ++i) {

        for (int j = 0; j < 4; ++j) {
            std::cout << "%";
            std::cout << " ";

        }
        std::cout << std::endl;
        for (int k = 0; k < 4; ++k) {
            std::cout << " ";
            std::cout << "%";

        }
        
        std::cout << std::endl;
        //std::cout << "% % % %" << std::endl;
        //std::cout << " % % % %" << std::endl;

    }




    // Crate a program that draws a chess table like this
    //
    // % % % %
    //  % % % %
    // % % % %
    //  % % % %
    // % % % %
    //  % % % %
    // % % % %
    //  % % % %

    return 0;
}