#include <iostream>
#include <string>

void greet();

int main(int argc, char* args[]) {

    std::string a1 = "Green Fox";

    greet();
    std::cout << a1 << std::endl;

    return 0;
}

void greet(){
    std::cout << "Greetings dear, ";
    
}





// - Create a string variable named `al` and assign the value `Green Fox` to it
// - Create a function called `greet` that greets it's input parameter
// - Greeting is printing e.g. `Greetings dear, Green Fox`