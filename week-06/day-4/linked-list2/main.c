#include <stdio.h>
#include "linked_list.h"

int main()
{

    node_t *head;
    init(&head);

    push_back(&head, 6);
    push_back(&head, 9);
    push_back(&head, 45);
    push_back(&head, 2346);
    push_back(&head, 0);

    print(head);
    printf("Size: %d\n", size(head));

    push_front(&head, 11);

    print(head);

    insert(head, 77, 1);

    print(head);

    printf("Size: %d\n", size(head));


    return 0;
}