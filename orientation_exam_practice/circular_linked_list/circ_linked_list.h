//
// Created by Peti on 2019. 08. 30..
//

#ifndef CIRCULAR_LINKED_LIST_CIRC_LINKED_LIST_H
#define CIRCULAR_LINKED_LIST_CIRC_LINKED_LIST_H

typedef struct node{
    int data;
    struct node* next;
}node_t;

void init(node_t** head, int size);






#endif //CIRCULAR_LINKED_LIST_CIRC_LINKED_LIST_H
