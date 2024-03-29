#ifndef LINKED_LIST_LINKED_LIST_H
#define LINKED_LIST_LINKED_LIST_H

typedef struct node{
    int data;
    struct node* next;
} node_t;

void init(node_t** head);
void push_back(node_t** head, int data);
void print(node_t* head);

void push_front(node_t** head, int data);

void insert(node_t* head, int data, int prev);

int size(node_t* head);


#endif //LINKED_LIST_LINKED_LIST_H