#include <iostream>
#include "Sharpie.h"

int main()
{
    Sharpie sharpie1("blue", 10);

    std::cout << sharpie1.getInkAmount() << std::endl;

    sharpie1.use();

    std::cout << sharpie1.getInkAmount() << std::endl;


    return 0;
}


//Create Sharpie class
//We should know about each sharpie their color (which should be a string), width (which will be a floating point number),
// inkAmount (another floating point number)
//When creating one, we need to specify the color and the width
//Every sharpie is created with a default 100 as inkAmount
//We can use() the sharpie objects
//which decreases inkAmount