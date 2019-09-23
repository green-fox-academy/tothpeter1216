#include <stdio.h>
//#include "linked_list.h"
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

void print_list()
{
    linked_list_t *ptr = head;
    printf("\n[ ");

    while (ptr != NULL) {
        printf("(%d, %d) ", ptr->key, ptr->data);
        ptr = ptr->next;
    }
    printf((" ])"));
}

//insert link at the first location
void insertFirst(int key, int data)
{
    //create a link
    linked_list_t *link = (linked_list_t*)malloc(sizeof(linked_list_t));

    link->key = key;
    link->data = data;

    //point it to old first node
    link->next = head;

    //point first to new first node
    head = link;
}

//delete first item
linked_list_t* deleteFirst(){
    //save reference to first link
    linked_list_t *temp_link = head;

    //mark next to first link as first
    head = head->next;

    //return the deleted link
    return temp_link;
}

//is list empty
bool is_empty(){
    return head == NULL;
}

int length(){
    int length = 0;
    linked_list_t* current;
    for (current = head; current != NULL ; current = current->next) {
        length++;
    }
    return length;
}

//find a link with given key
linked_list_t* find(int key){
    //start from the first link
    linked_list_t *current = head;

    //if list is empty
    if(head == NULL){
        return NULL;
    }

    //navigate through list
    while(current->key != key){

        //if it is last node
        if (current->next == NULL){
            return NULL;
        } else{
            //go to next link
            current = current->next;
        }
    }

    //if data found, return the current Liink
    return current;
}

//delete a link with given key
linked_list_t* delete(int key){

    //start from the first link
    linked_list_t* current = head;
    linked_list_t* previous = NULL;

    //if list is empty
    if(head == NULL){
        return NULL;
    }

    //navigate through list
    while (current->key != key){

        //if it is last node
        if(current->next == NULL){
            return NULL;
        } else{
            //store reference to current link
            previous = current;
            //move to next link
            current = current->next;
        }
    }
    //found a match, update the link
    if(current == head){
        //change the first to point to next link
        head = head->next;
    } else{
        //bypass the current link
        previous->next = current->next;
    }
    return current;
}

void sort(){
    int i, j, k, temp_key, temp_data;
    linked_list_t *current;
    linked_list_t*next;

    int size = length();
    k = size;

    for (i = 0; i < size - 1; i++, k--) {
        current = head;
        next = head->next;
        for (j = 0; j < k; j++) {
            if(current->data > next->data){
                temp_data = current->data;
                current->data = next->data;
                next->data = temp_data;

                temp_key = current->key;
                current->key = next->key;
                next->key = temp_key;
            }
            current = current->next;
            next = next->next;

        }
    }
}


void reverse(linked_list_t ** head_ref){
    linked_list_t* prev = NULL;
    linked_list_t *current = *head_ref;
    linked_list_t *next;

    while (current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head_ref = prev;
}


int main()
{
    insertFirst(1, 10);
    insertFirst(2, 10);
    insertFirst(3, 10);
    insertFirst(4, 1);
    insertFirst(5, 40);
    insertFirst(6, 56);

    printf("Original list: ");
    print_list();
    printf("\n");

    linked_list_t *found_link = find(4);

    if(found_link != NULL){
        printf("Element found: ");
        printf("(%d, %d))", found_link->key, found_link->data);
        printf("\n");
    } else{
        printf("Element not found.");
    }

    delete(4);
    printf("List after deleting an item:");
    print_list();
    printf("\n");
    found_link = find(4);

    if(found_link != NULL){
        printf("Element found: ");
        printf("(%d, %d)", found_link->key, found_link->data);
        printf("\n");
    } else{
        printf("Element not found.");
    }

    printf("\n");
    //sort();

    printf("List after sorting the data");
    print_list();

    reverse(&head);
    printf("\nList after reversing data: ");
    print_list();




    return 0;
}