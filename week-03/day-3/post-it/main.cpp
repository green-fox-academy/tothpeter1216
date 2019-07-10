#include <iostream>
#include "post_it.h"

int main()
{
    PostIt firstPostIt("orange", "Idea 1", "blue");


    PostIt secondPostIt("pink", "Awesame", "black");
    PostIt thirdPostIt("yellow", "Superb!", "green");

    std::cout << "firstPostIt backgroundcolor: " << firstPostIt.getBackgroundColor() << " firstPostIt textcolor: "
              << firstPostIt.getTextColor() << " firstPostIt textonit: " << firstPostIt.getTextOnIt() << std::endl;
    std::cout << "secondPostIt backgroundcolor: " << secondPostIt.getBackgroundColor() << " secondPostIt textcolor: "
              << secondPostIt.getTextColor() << " secondPostIt textonit: " << secondPostIt.getTextOnIt() << std::endl;
    std::cout << "thirdPostIt backgroundcolor: " << thirdPostIt.getBackgroundColor() << " thirdPostIt textcolor: "
              << thirdPostIt.getTextColor() << " thirdPostIt textonit: " << thirdPostIt.getTextOnIt() << std::endl;

    return 0;
}


//Post-it
//Create a PostIt class that has
//a backgroundColor
//a text on it
//a textColor
//Create a few example post-it objects:
//an orange with blue text: "Idea 1"
//a pink with black text: "Awesome"
//a yellow with green text: "Superb!"