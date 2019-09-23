//
// Created by Peti on 2019. 08. 26..
//

#ifndef TUTORIAL_MAGYAR_LINKED_LIST_PREV_NEXT_H
#define TUTORIAL_MAGYAR_LINKED_LIST_PREV_NEXT_H

#include <stdlib.h>
#include <stdio.h>

typedef struct link_list_adv{
    int data;
    int index;
    struct link_list_adv* next;
    struct link_list_adv* prev;
}link_list_adv_t;

typedef struct link_list_short{
    int size;
    link_list_adv_t* start;
    link_list_adv_t* end;
}link_list_short_t;

void init(link_list_adv_t** listAdv);

void push_back(link_list_adv_t** pListAdv, int new_data);



#endif //TUTORIAL_MAGYAR_LINKED_LIST_PREV_NEXT_H
