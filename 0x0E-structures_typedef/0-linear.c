#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
int linear_search(int *array, size_t size, int value) {
    
    for (int i = 0; i < size; i++) {
        
        printf("Comparing %d at index:  %d\n\n", array[i], value);

        
        if (array[i] == value) {
            return i;
        }
    }

    
    return -1;
}
