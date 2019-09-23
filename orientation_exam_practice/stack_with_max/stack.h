//
// Created by Peti on 2019. 08. 27..
//

#ifndef STACK_WITH_MAX_STACK_H
#define STACK_WITH_MAX_STACK_H




#include <stdio.h>
#include <stdlib.h>

typedef struct stack_max{
    int maxsize;
    int elements;
    int top;
    int *items;
}stack_max_t;

typedef struct stack{
    int maxsize;
    int elements;
    int top;
    int *items;
    /*stack_max_t* max;*/
}stack_t;

void init(stack_t* stack);
//
//void push(stack_t* stack, int new_data);
//
//void pop(stack_t* stack);
//
//int get_top(stack_t* stack);

#endif //STACK_WITH_MAX_STACK_H
