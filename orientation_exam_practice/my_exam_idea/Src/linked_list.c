//
// Created by Peti on 2019. 09. 08..
//

#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>

void init(node_t **head)
{
    *head = NULL;
}

void push_back(node_t **head, int new_data)
{

    node_t *new_node = (node_t *) pvPortMalloc(sizeof(node_t));
    new_node->data = new_data;
    new_node->next = NULL;

    if (*head == NULL) {
        *head = new_node;
        return;
    }

    node_t *ptr = *head;
    while (ptr->next != NULL) {
        ptr = ptr->next;
    }
    ptr->next = new_node;


}

int is_empty(node_t *head)
{
    return head == NULL;
}

void print(node_t *head)
{
    while (head != NULL) {
        printf(" %d \n", head->data);
        head = head->next;
    }
    printf("\n");

}

void push_front(node_t **head, int new_data)
{
    node_t *new_node = (node_t *) pvPortMalloc(sizeof(node_t));
    new_node->data = new_data;
    new_node->next = *head;
    *head = new_node;
}

int size(node_t *head)
{
    int counter = 0;
    if (head == NULL) {
        return 0;
    }
    while (head != NULL) {
        head = head->next;
        counter++;
    }
    return counter;
}

void insert(node_t **head, int new_data, int position)
{
    node_t *new_node = (node_t *) pvPortMalloc(sizeof(node_t));
    new_node->data = new_data;

    node_t *ptr = *head;
    int counter = 0;
    while (counter + 2 != position) {
        ptr = ptr->next;
        counter++;
    }
    new_node->next = ptr->next;
    ptr->next = new_node;

}


int pop_back(node_t** head){
    node_t* ptr = *head;
    int deleted;
    if(ptr->next == NULL){
       // printf("Last element");
        //ptr == NULL;
        deleted = ptr->data;
        //vPortFree((void*)head);
        *head = NULL;
        return deleted;
    }
    while (ptr->next->next != NULL){
        ptr = ptr->next;
    }
    deleted = ptr->data;
    vPortFree(ptr->next);
    ptr->next = NULL;
    return deleted;
}

void pop_front(node_t** head)
{
    if(*head == NULL){
        return;
    }

    node_t* p = *head;
    *head = (*head)->next;
    vPortFree(p);
}

void delete_index(node_t** head, int position){
    node_t* ptr = *head;
    int counter = 0;
    while (counter +2 != position){
        ptr = ptr->next;
        counter++;
    }
    //vPortFree(ptr->next);
    ptr->next = ptr->next->next;


}
