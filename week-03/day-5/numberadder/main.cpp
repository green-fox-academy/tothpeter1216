#include <iostream>



//int factorial(int num) {
//    if (num <= 1) { //base case
//        return 1;
//    } else {
//        return num * factorial(num - 1);
//    }
//}
//
//int main() {
//    std::cout << factorial(5) << std::endl;
//    return 0;
//}


int adder(int n)
{
    if (n <= 0){
        return 1;
    } else{
        return n + adder(n -1);
    }

}



int main()
{
    std::cout << adder(5) << std::endl;
    return 0;
}






// Write a recursive function that takes one parameter: n and adds numbers from 1 to n.