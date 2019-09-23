#include <stdio.h>
#include "stack_with_max.h"

int main()
{
    stack_with_max_t my_stack;
    init(&my_stack);

    push(&my_stack, 10);
    push(&my_stack, 12);
    push(&my_stack, 9);
    push(&my_stack, 8);
    push(&my_stack, 5);
    push(&my_stack, 100);
    push(&my_stack, 50);
    int top = get_top(&my_stack);
    printf("top element: %d\n", top);
    printf("max: %d\n", get_max(&my_stack));
    pop(&my_stack);
    printf("top element: %d\n", get_top(&my_stack));
    printf("max: %d\n", get_max(&my_stack));
    pop(&my_stack);
    printf("top element: %d\n", get_top(&my_stack));
    printf("max: %d\n", get_max(&my_stack));

    return 0;
}