#include <stdio.h>

#include "vector.h"

int main()
{
    vector_t my_vector;
    init(&my_vector);
    printf("Free capacity: %d\n", free_capacity(&my_vector));
    push_back(&my_vector, 10);
    printf("Free capacity: %d\n", free_capacity(&my_vector));
    push_back(&my_vector, 11);
    print(&my_vector);
    push_back(&my_vector, 12);
    push_back(&my_vector, 13);

    print(&my_vector);

    printf("Size: %d\n", size(&my_vector));
    printf("Free capacity: %d\n", free_capacity(&my_vector));

    insert(&my_vector, 100, 2);
    print(&my_vector);

    printf("Max size: %d\n", max_size(&my_vector));
    printf("Empty or not: %d\n", empty(&my_vector));

    pop_back(&my_vector);
    print(&my_vector);
    erase(&my_vector, 2);

    print(&my_vector);

    printf("Search 100: %d\n", search(&my_vector, 100));

    push_front(&my_vector, 55);
    print(&my_vector);

    pop_front(&my_vector);
    print(&my_vector);

    push_back(&my_vector, 12);
    push_back(&my_vector, 13);
    push_back(&my_vector, 13);
    push_back(&my_vector, 13);
    push_back(&my_vector, 13);
    push_back(&my_vector, 13);
    push_back(&my_vector, 13);

    printf("A lot of data: \n");
    print(&my_vector);

    printf("Free capacity: %d\n", free_capacity(&my_vector));


    return 0;
}