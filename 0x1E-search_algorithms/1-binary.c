#include "search_algos.h"
#include <stddef.h>

/**
 * binary_search - algorithm for binary search.
 * @array: Pointer to the first element of the
 * array to search in
 * @size: elements.
 * @value: Value.
 * Return: (Index to where value is located), or
 * -1 if not present
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid;
	size_t i;

	/* Check NULL array*/
	if (array == NULL)
		return (-1);

	/* search loop for binary. */
	while (left <= right)
	{
		/* Print subarray searched */
		printf("Searching in array: ");
		for (i = left; i <= right; ++i)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
			else
				printf("\n");
		}

		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
