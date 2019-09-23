//
// Created by Peti on 2019. 08. 26..
//


#include "linked_list.h"


void init(linked_list_t** head){
    *head = NULL;
}

void push_back(linked_list_t **head, int new_data){
    linked_list_t *new_node = (linked_list_t*)malloc(sizeof(linked_list_t));
    new_node->data = new_data;
    new_node->next = NULL;

    if (*head == NULL){
        *head = new_node;
        return;
    }
     linked_list_t*p = *head;
    while (p->next != NULL){
        p = p->next;
    }
    p->next = new_node;
}

void print (linked_list_t** head){
    linked_list_t* p = *head;
    int counter = 0;
    while (p != NULL){
        printf("%d. element: %d\n", counter, p->data);
        p= p->next;
        counter++;
    }
}