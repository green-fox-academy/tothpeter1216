//
// Created by Peti on 2019. 08. 09..
//

#ifndef VECTOR_VECTOR_H
#define VECTOR_VECTOR_H

#include <stdlib.h>
#include <stdio.h>
#include <mem.h>

typedef struct vect
{
    int *data;
    int size;
    int capacity;
} vector_t;


void init(vector_t *vector);

void push_back(vector_t *vector, int new_data);

void push_front(vector_t *vector, int new_data);

void pop_front(vector_t *vector);

int size(vector_t *vector);

int free_capacity(vector_t *vector);

void insert(vector_t *vector, int value, int position);

void print(vector_t *vector);

int max_size(vector_t *vector);

int empty(vector_t *vector);

void pop_back(vector_t *vector);

void erase(vector_t *vector, int position);

int search(vector_t *vector, int value);


#endif //VECTOR_VECTOR_H
