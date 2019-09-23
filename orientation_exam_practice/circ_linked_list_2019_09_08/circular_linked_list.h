//
// Created by Peti on 2019. 09. 08..
//

#ifndef CIRC_LINKED_LIST_2019_09_08_CIRCULAR_LINKED_LIST_H
#define CIRC_LINKED_LIST_2019_09_08_CIRCULAR_LINKED_LIST_H

typedef struct node{
    int data;
    int index;
    struct node *next;
}node_t;

void init(node_t** head, int size);

void push_back_for_init(node_t **head, int new_data, int index);

//void push_in(node_t **head, int new_data);

void print(node_t* head);








#endif //CIRC_LINKED_LIST_2019_09_08_CIRCULAR_LINKED_LIST_H
