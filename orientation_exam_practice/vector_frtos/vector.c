//
// Created by Peti on 2019. 08. 09..
//

#include <mem.h>
#include "vector.h"

void init(vector_t *vector)
{
    vector->capacity = 2;
    vector->data = (int *) malloc(vector->capacity * sizeof(int));
    vector->size = 0;

}

void push_back(vector_t *vector, int new_data)
{
    vector->size++;
    /*if (vector->capacity <= vector->size) {
        vector->capacity = vector->capacity * 2;
        vector->data = realloc(vector->data, vector->capacity * sizeof(int));
    }*/
    if (vector->capacity <= vector->size) {
        vector->capacity = vector->capacity * 2;

        int *temp = vector->data;
        vector->data = (int *) malloc(vector->capacity * sizeof(int));

        for (int i = 0; i < vector->size - 1; ++i) {
            vector->data[i] = temp[i];
        }

        //memcpy(temp, vector->data, vector->size-1);
        //memcpy (vector->data,temp, vector->size-1 * sizeof(int);

        free(temp);
    }
    vector->data[vector->size - 1] = new_data;


    //vector->data[vector->size - 1] = new_data;

}

void push_front(vector_t *vector, int new_data)
{
    vector->size++;

    if (vector->capacity <= vector->size) {
        vector->capacity = vector->capacity * 2;

        int *temp = vector->data;
        vector->data = (int *) malloc(vector->capacity * sizeof(int));

        for (int i = 0; i < vector->size - 1; ++i) {
            vector->data[i] = temp[i];
        }

        free(temp);
    }
    for (int j = 0; j < vector->size - 1; ++j) {
        vector->data[vector->size - 1 - j] = vector->data[vector->size - 1 - j - 1];
    }
    vector->data[0] = new_data;


}

void pop_front(vector_t *vector)
{
    for (int i = 0; i < vector->size - 1; ++i) {
        vector->data[i] = vector->data[i + 1];
    }
    vector->size--;
}

int size(vector_t *vector)
{
    return vector->size;
}

int free_capacity(vector_t *vector)
{
    return vector->capacity - vector->size;
}

void insert(vector_t *vector, int value, int position)
{
    if (position > vector->size - 1) {
        printf("The vector smaller than the asked position.");
        return;
    }
    vector->size++;
    /*if (vector->size >= vector->capacity) {
        vector->capacity *= 2;
        vector->data = realloc(vector->data, vector->capacity * sizeof(int));
    }*/

    if (vector->capacity <= vector->size) {
        vector->capacity = vector->capacity * 2;

        int *temp = vector->data;
        vector->data = (int *) malloc(vector->capacity * sizeof(int));

        for (int i = 0; i < vector->size - 1; ++i) {
            vector->data[i] = temp[i];
        }

        //memcpy(temp, vector->data, vector->size-1);

        free(temp);
    }


    for (int i = 0; i < vector->size - position; ++i) {
        vector->data[vector->size - 1 - i] = vector->data[vector->size - 1 - i - 1];
    }
    vector->data[position] = value;


}

void print(vector_t *vector)
{
    for (int i = 0; i < vector->size; ++i) {
        printf("%d: %d\n", i, vector->data[i]);
    }
}

int max_size(vector_t *vector)
{
    return vector->capacity;
}

int empty(vector_t *vector)
{
    if (vector->size == 0) {
        return 1;
    } else {
        return 0;
    }
}

void pop_back(vector_t *vector)
{
    vector->size--;
    /*if (vector->size < vector->capacity / 2) {
        vector->capacity = 0.75 * vector->capacity;
        vector->data = realloc(vector->data, vector->capacity * sizeof(int));
    }*/
}

void erase(vector_t *vector, int position)
{
    if (position > vector->size - 1) {
        printf("The position doe not exist.");
        return;
    }

    for (int i = 0; i < vector->size - position; ++i) {
        vector->data[position + i - 1] = vector->data[position + i];
    }

    vector->size--;
    /*if (vector->size < vector->capacity / 2) {
        vector->capacity = 0.75 * vector->capacity;
        vector->data = realloc(vector->data, vector->capacity * sizeof(int));
    }*/
}

int search(vector_t *vector, int value)
{
    int is_in = 0;
    int find = 0;
    for (int i = 0; i < vector->size - 1; ++i) {
        if (vector->data[i] == value) {
            is_in = 1;
            find = i;

        }
    }
    if (is_in == 0) {
        return -1;
    } else {
        return find;
    }

}
