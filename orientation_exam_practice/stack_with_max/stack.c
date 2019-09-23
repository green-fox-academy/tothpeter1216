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


//void init(stack_t* stack){
//    stack->maxsize = 10;
//    stack->elements = 0;
//    stack->top = -1;
//    stack->items = (int*)malloc(sizeof(int) * stack->maxsize);
//
//    //init(stack->max);
//
//    /*stack->max->maxsize = 10;
//    stack->max->elements = 0;
//    stack->max->top = -1;
//    stack->max->items = (int*)malloc(sizeof(int) * stack->max->maxsize);*/
//}

/*void push(stack_t* stack, int new_data){ //malloc, if elements >= capacity
    if(stack->maxsize <= stack->elements){
        stack->maxsize = stack->maxsize * 2;
        stack->items = realloc(stack->items, sizeof(int)* stack->maxsize);
    }
    stack->elements++;
    stack->items[stack->elements -1] = new_data;
    stack->top = new_data;

    if (new_data > stack->max->top){
        if(stack->max->elements >= stack->max->maxsize){
            stack->max->maxsize = stack->max->maxsize * 2;
            stack->max->items = realloc(stack->max->items, sizeof(int) * stack->max->maxsize);
        }

        stack->max->elements++;
        stack->max->top = new_data;
        stack->max->top = new_data;
    }
}

void pop(stack_t* stack){ //max building
    stack->elements--;
    stack->top = stack->items[stack->elements-1];
}

int get_top(stack_t* stack){
    return stack->top;
}*/


