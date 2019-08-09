//
// Created by Peti on 2019. 08. 09..
//

#include "vector.h"

void init(vect_t *vector)
{
    vector->capacity = 2;
    vector->data = (int *) malloc(vector->capacity * sizeof(int));
    vector->size = 0;

}

void push_back(vect_t *vector, int new_data)
{
    vector->size++;
    if (vector->capacity <= vector->size) {
        vector->capacity = vector->capacity * 2;
        vector->data = realloc(vector->data, vector->capacity * sizeof(int));
    }
    vector->data[vector->size-1] = new_data;

}

int size(vect_t *vector)
{
    return vector->size;
}

int capacity_of_vect(vect_t *vecor)
{
    return vecor->capacity - vecor->size;
}

void insert(vect_t *vector, int value, int position)
{
    vector->size++;
    if (vector->size >= vector->capacity) {
        vector->capacity *= 2;
        vector->data = realloc(vector->data, vector->capacity * sizeof(int));
    }

    for (int i = 0; i < vector->size - position; ++i) {
        vector->data[vector->size -1 - i] =vector->data[vector->size-1-i-1];
    }
    vector->data[position] = value;


}

void print(vect_t* vector){
    for (int i = 0; i < vector->size; ++i) {
        printf("%d: %d\n",i,  vector->data[i]);
    }


}

