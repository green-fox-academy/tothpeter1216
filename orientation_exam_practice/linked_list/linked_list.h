//
// Created by Peti on 2019. 08. 26..
//

#ifndef LINKED_LIST_LINKED_LIST_H
#define LINKED_LIST_LINKED_LIST_H

#include <stdio.h>
#include <stdlib.h>

typedef struct linked_list{
    int data;
    struct linked_list* next;
}linked_list_t;

void init(linked_list_t** head);

void push_back(linked_list_t **head, int new_data);

void print(linked_list_t **head);






#endif //LINKED_LIST_LINKED_LIST_H
