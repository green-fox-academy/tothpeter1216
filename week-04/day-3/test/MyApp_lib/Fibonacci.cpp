//
// Created by Peti on 2019. 07. 17..
//

#include "Fibonacci.h"

int fib(int n)
{
    int a = 1, b = 1;
    for (int i = 3; i <= n; i++) {
        int c = a + b;
        a = b;
        b = c;
    }
    return b;
}
