//
// Created by Peti on 2019. 09. 08..
//

#ifndef LINKED_LIST_LINKED_LIST_H
#define LINKED_LIST_LINKED_LIST_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node
{
    int data;
    int key;
    struct node *next;
} linked_list_t;

linked_list_t *head = NULL;
linked_list_t *current = NULL;


//display the list
void print_list();

//insert link at the first location
void insertFirst(int key, int data);



#endif //LINKED_LIST_LINKED_LIST_H
