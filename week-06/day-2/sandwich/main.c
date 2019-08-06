#include <stdio.h>

/*
Create a sandwich struct
It should store:
 - name
 - price (float)
 - weight (float)
Create a function which takes two parameters and returns the price of your order.
The parameters should be:
 - a sandwich struct
 - and an integer that represents how many sandwiches you want to order
*/

struct Sandwich
{
    char name;
    float price;
    float weight;
};

int order(struct Sandwich sandwich, int ordered_sandwiches)
{
    int price_final = sandwich.price * sandwich.weight* ordered_sandwiches;
    return price_final;
}

int main()
{

    struct Sandwich sandwich;
    sandwich.name = " szenya";
    sandwich.price = 10;
    sandwich.weight = 5;
    printf("Price of the sandwiches: %d\n", order(sandwich, 3));
    return 0;
}