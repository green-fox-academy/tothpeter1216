#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    char name[256];
    float price;
    float weight;
};

int order(struct Sandwich sandwich, int ordered_sandwiches);

int main()
{

    struct Sandwich sandwich;
    strcpy(sandwich.name, "szenya");
    sandwich.price = 10;
    sandwich.weight = 5;
    printf("Price of the sandwiches (%s): %d\n", sandwich.name, order(sandwich, 3));
    return 0;
}

int order(struct Sandwich sandwich, int ordered_sandwiches)
{
    int price_final = sandwich.price * sandwich.weight* ordered_sandwiches;
    return price_final;
}