#include "linked_list.h"
#include <stdlib.h>
#include <stdio.h>

void init(node_t **head)
{
    *head = NULL;
}

void push_back(node_t **head, int data)
{
    node_t *new_node = (node_t *) malloc(sizeof(node_t));
    new_node->data = data;
    new_node->next = NULL;

    if (*head == NULL) {
        *head = new_node;
        return;
    }

    node_t *p = *head;
    while (p->next != NULL) {
        //printf("P: %d %d\n", p->next, p->data);
        //printf("Head: %d", *head);
        p = p->next;
    }

    p->next = new_node;
}

void print(node_t *head)
{
    int counter = 0;
    while (head != NULL) {
        printf("%d. %d\n", ++counter, head->data);
        head = head->next;
    }
}

void push_front(node_t **head, int data)
{
    node_t *new_node = (node_t *) malloc(sizeof(node_t));
    new_node->data = data;
    new_node->next = *head;

    *head = new_node;
}

void insert(node_t *head, int data, int prev)
{
    node_t *new_node = (node_t *) malloc(sizeof(node_t));
    new_node->data = data;

    node_t *p = head;
    int counter = 0;
    while (p->next != NULL) {
        counter++;
        p = p->next;
        if (counter == prev) {
            new_node->next = p->next;
            p->next = new_node;
            return;
        }
    }
}