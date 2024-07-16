#include "search_algos.h"
#include <stdio.h>
#include <stddef.h>

/**
 * linear_search - algorithm.
 * @array: int.
 * @size: array size.
 * @value: value.
 * Return: position, (-1 if not found).
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; ++i)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}
	return (-1);
}
