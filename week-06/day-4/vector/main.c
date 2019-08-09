#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

int main()
{
    vect_t vector1;
    init(&vector1);
    push_back(&vector1, 2);
    push_back(&vector1, 2);
    printf("Capacity: %d\n", capacity_of_vect(&vector1));
    push_back(&vector1, 2);
    printf("Capacity: %d\n", capacity_of_vect(&vector1));

    push_back(&vector1, 2);
    printf("Capacity: %d\n", capacity_of_vect(&vector1));

    push_back(&vector1, 2);


    printf("%d\n", size(&vector1));
    printf("%d\n", capacity_of_vect(&vector1));

    insert(&vector1, 10, 2);

    print(&vector1);






    return 0;
}