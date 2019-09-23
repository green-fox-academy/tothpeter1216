//
// Created by Peti on 2019. 08. 28..
//

#include "stack_with_max.h"

void init(stack_with_max_t* stack){
    stack->maxsize = 10;
    stack->elements = 0;
    stack->top = -1;
    stack->items = (int*)malloc(sizeof(int) * stack->maxsize);

    //init(stack_with_max->max);
    stack->max.maxsize = 10;
    stack->max.elements = 0;
    stack->max.top = -1;
    stack->max.items = (int*)malloc(sizeof(int) * stack->max.maxsize);



    //stack_with_max->max->maxsize = 10;
    //stack_with_max->max->elements = 0;
    //stack_with_max->max->top = -1;
    //stack_with_max->max->items = (int*)malloc(sizeof(int) * stack_with_max->max->maxsize);
}

void push(stack_with_max_t* stack, int new_data){ //malloc, if elements >= capacity
    if(stack->maxsize <= stack->elements){
        stack->maxsize = stack->maxsize * 2;
        stack->items = realloc(stack->items, sizeof(int)* stack->maxsize);
    }
    stack->elements++;
    stack->items[stack->elements -1] = new_data;
    stack->top = new_data;

    if (stack->top >= stack->max.top){
        if(stack->max.elements >= stack->max.maxsize){
            stack->max.maxsize = stack->max.maxsize * 2;
            stack->max.items = realloc(stack->max.items, sizeof(int) * stack->max.maxsize);
        }

        stack->max.elements++;
        stack->max.items[stack->max.elements - 1] = stack->top;
        stack->max.top = stack->top;


    }
}

void pop(stack_with_max_t* stack){ //max building
    if(stack->items[stack->elements -1] == stack->max.top){
        stack->max.elements--;
        stack->max.top = stack->max.items[stack->max.elements - 1];
    }
    stack->elements--;
    stack->top = stack->items[stack->elements-1];


}

int get_top(stack_with_max_t* stack)
{
    return stack->top;
}

int get_max(stack_with_max_t* stack){
    return stack->max.top;
}