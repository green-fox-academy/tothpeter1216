#include <stdio.h>
#include "linked_list.h"

int main()
{

    node_t *head;
    init(&head);


    printf("%d\n", is_empty(head));
    printf("Size: %d\n", size(head));
    push_front(&head, 100);
    printf("last pop_back\n");
    printf("deleted value: %d", pop_back(&head));

    print(head);
    printf("%d\n", is_empty(head));
    push_back(&head, 10);
    push_back(&head, 11);
    push_back(&head, 12);
    push_back(&head, 13);


    print(head);

    push_front(&head, 3);
    push_front(&head, 4);
    push_front(&head, 5);
    push_front(&head, 5);
    print(head);
    pop_back(&head);
    pop_back(&head);
    pop_back(&head);
    printf("After pop_back: ");
    print(head);
    printf("Size: %d\n", size(head));

    insert(&head, 7, 3);
    printf("After insert: ");
    print(head);
    printf("Size: %d\n", size(head));

    pop_front(&head);
    pop_front(&head);

    printf("after pop front\n");
    print(head);

    delete_index(&head, 2);
    delete_index(&head, 2);
    printf("After del_pos: ");
    print(head);




    return 0;
}