//
// Created by Peti on 2019. 08. 28..
//

#ifndef STACK_WITH_MAX2_STACK_WITH_MAX_H
#define STACK_WITH_MAX2_STACK_WITH_MAX_H

#include <stdio.h>
#include <stdlib.h>

typedef struct stack{
    int maxsize;
    int elements;
    int top;
    int *items;
}stack_t;

typedef struct stack_with_max{
    int maxsize;
    int elements;
    int top;
    int *items;
    stack_t max;
}stack_with_max_t;

void init(stack_with_max_t* stack);

void push(stack_with_max_t* stack, int new_data);

void pop(stack_with_max_t* stack);

int get_top(stack_with_max_t* stack);

int get_max(stack_with_max_t* stack);

#endif //STACK_WITH_MAX2_STACK_WITH_MAX_H
