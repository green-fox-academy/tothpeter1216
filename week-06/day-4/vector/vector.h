//
// Created by Peti on 2019. 08. 09..
//

#ifndef VECTOR_VECTOR_H
#define VECTOR_VECTOR_H

#include <stdlib.h>
#include <stdio.h>

typedef struct vect{
    int *data;
    int size;
    int capacity;
}vect_t;


void init(vect_t* vector);

void push_back(vect_t *vector, int new_data);

int size(vect_t* vector);

int capacity_of_vect(vect_t* vecor);

void insert(vect_t* vector, int value, int position);

void print(vect_t* vector);




#endif //VECTOR_VECTOR_H
