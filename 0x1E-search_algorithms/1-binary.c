#include "search_algos.h"


/**
 * search_result - display the range of binary search
 * @l: the first index for display
 * @r: the last index for display
 * @array: the array to display
*/

void search_result(int *array, int low, int high)
{
	printf("Searching  array: ");
	for (;low < high; low++)
		printf("%i, ", array[l]);
	printf("%i\n", array[high]);
}

/**
 * binary_search - search value in the given array using binary search***/

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;
	int mid;

	if (!array || !size)
		return (-1);

	while (low <= high)
	{
		search_result(array, l, r);
		mid = (high + l) / 2;
		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}
	return (-1);
}

