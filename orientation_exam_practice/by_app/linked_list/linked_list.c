//
// Created by Peti on 2019. 09. 08..
//


/*#include "linked_list.h"

//display the list
void print_list()
{
    linked_list_t *ptr = head;
    printf("\n[ ");

    while (ptr != NULL) {
        printf("(%d, %d) ", ptr->key, ptr->data);
        ptr = ptr->next;
    }
    printf((" ])"));
}

//insert link at the first location
void insertFirst(int key, int data)
{
    //create a link
    linked_list_t *link = (linked_list_t*)malloc(sizeof(linked_list_t));

    link->key = key;
    link->data = data;

    //point it to old first node
    link->next = head;

    //point first to new first node
    head = link;
}
*/