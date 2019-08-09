#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

int main()
{
    vect_t vector1;
    init(&vector1);
    printf("Max size: %d\n", max_size(&vector1));
    printf("Is empty? %d\n", empty(&vector1));

    push_back(&vector1, 2);
    push_back(&vector1, 2);
    printf("Capacity: %d\n", free_capacity(&vector1));
    push_back(&vector1, 2);
    printf("Capacity: %d\n", free_capacity(&vector1));

    push_back(&vector1, 2);
    printf("Capacity: %d\n", free_capacity(&vector1));

    push_back(&vector1, 2);


    printf("Size of the vector: %d\n", size(&vector1));
    printf("%d\n", free_capacity(&vector1));

    insert(&vector1, 10, 2);
    printf("Elements of the vector: \n");
    print(&vector1);

    printf("Max size: %d\n", max_size(&vector1));

    printf("Is empty? %d\n", empty(&vector1));

    printf("The third element: %d\n", vector1.data[3]);

    pop_back(&vector1);
    printf("Elements of the vector: \n");
    print(&vector1);
    printf("Size of the vector: %d\n", size(&vector1));
    printf("Max size: %d\n", max_size(&vector1));


    printf("Max size: %d\n", max_size(&vector1));
    print(&vector1);
    erase(&vector1, 2);
    printf("--------\n");
    printf("Max size: %d\n", max_size(&vector1));
    print(&vector1);


    return 0;
}