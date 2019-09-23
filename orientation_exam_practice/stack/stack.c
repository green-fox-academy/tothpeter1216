//
// Created by Peti on 2019. 08. 27..
//

#include "stack.h"


void init(stack_t* stack){
    stack->maxsize = 10;
    stack->elements = 0;
    stack->top = -1;
    stack->items = (int*)malloc(sizeof(int) * stack->maxsize);
}

void push(stack_t* stack, int new_data){ //malloc, if elements >= capacity
    if(stack->maxsize <= stack->elements){
        stack->maxsize * 2;
        stack->items = realloc(stack->items, sizeof(int)* stack->maxsize);
    }
    stack->elements++;
    stack->items[stack->elements -1] = new_data;
    stack->top = new_data;
}

void pop(stack_t* stack){
    stack->elements--;
    stack->top = stack->items[stack->elements-1];
}

int get_top(stack_t* stack){
    return stack->top;
}

