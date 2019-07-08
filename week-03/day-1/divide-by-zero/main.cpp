#include <iostream>
#include <fstream>


int divider (int a, int b);

int main()
{
    int number1;
    int number2;

    std::cout << "Type in a number."  << std::endl;
    std::cin >> number1;
    std::cout << "Type in a new number."  << std::endl;
    std::cin >> number2;


    try {
        std::cout << divider(number1,number2) << std::endl;
    }catch (std::string& e) {
        std::cout << e << std::endl;
    }


    return 0;
}

int divider (int a, int b){
    int result;
    if (b == 0){
        throw std::string("can't divide by 0.");
    }
    result = a / b;
    return result;

}



// Create a function that takes a number
// divides ten with it,
// and prints the result.
// It should print "fail" if the parameter is 0