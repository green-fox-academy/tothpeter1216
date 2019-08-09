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
    vector->data[vector->size - 1] = new_data;

}

int size(vect_t *vector)
{
    return vector->size;
}

int free_capacity(vect_t *vecor)
{
    return vecor->capacity - vecor->size;
}

void insert(vect_t *vector, int value, int position)
{
    if (position > vector->size - 1) {
        printf("The vector smaller than the asked position.");
        return;
    }
    vector->size++;
    if (vector->size >= vector->capacity) {
        vector->capacity *= 2;
        vector->data = realloc(vector->data, vector->capacity * sizeof(int));
    }

    for (int i = 0; i < vector->size - position; ++i) {
        vector->data[vector->size - 1 - i] = vector->data[vector->size - 1 - i - 1];
    }
    vector->data[position] = value;


}

void print(vect_t *vector)
{
    for (int i = 0; i < vector->size; ++i) {
        printf("%d: %d\n", i, vector->data[i]);
    }
}

int max_size(vect_t *vector)
{
    return vector->capacity;
}

int empty(vect_t *vector)
{
    if (vector->size == 0) {
        return 1;
    } else {
        return 0;
    }
}

void pop_back(vect_t *vector)
{
    vector->size--;
    if (vector->size < vector->capacity / 2) {
        vector->capacity = 0.75 * vector->capacity;
        vector->data = realloc(vector->data, vector->capacity * sizeof(int));
    }
}

void erase(vect_t *vector, int position)
{
    if (position > vector->size - 1) {
        printf("The position doe not exist.");
        return;
    }

    for (int i = 0; i < vector->size - position; ++i) {
        vector->data[position + i] = vector->data[position + i + 1];
    }


    vector->size--;

}

