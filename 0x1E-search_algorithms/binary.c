#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
int binary_search(int *array, size_t size, int value) {
    int l = 0, h = size - 1, m;
    while (l <= h) {
        m = (l + h) / 2;
        printf("Searching in array: ");
        for (int i = low; i <= h; i++) {
            printf("%d", *(array + i));
            if (i < h) {
                printf(", ");
            }
        }
        printf("\n");
        if (value == *(array + m)) {
            return m;
        } else if (value < *(array + m)) {
            h = m - 1;
        } else {
            l = m + 1;
        }
    }
    return -1;
}

