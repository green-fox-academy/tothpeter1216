//
// Created by Peti on 2019. 09. 08..
//

#include "circular_linked_list.h"
#include <stdlib.h>
#include <stdio.h>

void init(node_t** head, int size){
   *head = NULL;
    for (int i = 0; i < size; ++i) {
        push_back_for_init(head, -1, i);
    }

    node_t *ptr = *head;
    while (ptr->next != NULL) {
        ptr = ptr->next;
    }
    ptr->next = *head;
}

void push_back_for_init(node_t **head, int new_data, int index)
{

    node_t *new_node = (node_t *) malloc(sizeof(node_t));
    new_node->data = new_data;
    new_node->next = NULL;
    new_node->index = index;

    if (*head == NULL) {
        *head = new_node;
        //new_node->index = 0;
        return;
    }

    node_t *ptr = *head;
    while (ptr->next != NULL) {
        ptr = ptr->next;
    }
    ptr->next = new_node;


}

void print(node_t* head){
    if(head == NULL){
        printf("The list is empty");
        return;
    }
    /*if(head->size = 1){
        printf("%d", head->data);
    }*/

    while (head->next->index != 0){
        printf(" %d ", head->data);
        head = head->next;
    }

}

/*
void push_in(node_t **head, int new_data){
    node_t *new_node = (node_t*)malloc(sizeof(node_t));
    new_node->data = new_data;
    node_t *ptr = *head;

    if(*head == NULL){
        new_node->next = *head;
        new_node->size = 1;
        *head = new_node;
        return;
    }


    ptr->size++;
    new_node->next = ptr->next;
    ptr->next = new_node;
}

void print(node_t* head){
    if(head == NULL){
        printf("The list is empty");
        return;
    }
    if(head->size = 1){
        printf("%d", head->data);
    }

    while (head->next != head){
        printf(" %d ", head->data);
        head = head->next;
    }

}
 */