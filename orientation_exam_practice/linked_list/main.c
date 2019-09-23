#include <stdio.h>
#include "linked_list.h"


int main()
{
    linked_list_t* head;
    init(&head);

    push_back(&head, 10);
    push_back(&head, 11);

    print(&head);


    printf("Hello, World!\n");
    return 0;
}