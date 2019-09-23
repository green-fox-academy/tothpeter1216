//
// Created by Peti on 2019. 09. 08..
//

#ifndef LINKED_LIST_2019_09_08_LINKED_LIST_H
#define LINKED_LIST_2019_09_08_LINKED_LIST_H

typedef struct node
{
    int data;
    struct node *next;
} node_t;

void init(node_t **head);

void push_back(node_t **head, int new_data);

int is_empty(node_t *head);

void print(node_t *head);

void push_front(node_t **head, int new_data);

int size(node_t *head);

void insert(node_t **head, int new_data, int position);

int pop_back(node_t** head);

void pop_front(node_t** head);

void delete_index(node_t** head, int position);


#endif //LINKED_LIST_2019_09_08_LINKED_LIST_H
