#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * @low is the first index
 *@ hign the last indez
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 */
int binary_search(int *array, size_t size, int value)
{
    int low = 0;
    int high = size - 1;
    int mid;

    if (array == NULL)
        return (-1);

    while (low <= hign)
    {
        
        printf("Searching in array: ");
        for (int i = low; i <= high; i++)
        {
            printf("%d", array[i]);
            if (i != end)
                printf(", ");
            else
                printf("\n");
        }

        mid = (low + high) / 2;

        if (array[mid] == value)
            return (mid);

        if (array[mid] < value)
            start = mid + 1;
        else
            end = mid - 1;
    }

    
    return (-1);
}

