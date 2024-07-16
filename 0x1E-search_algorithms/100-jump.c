#include "search_algos.h"

/**
 * jump_search - search algorithm.
 * @array: array
 * @size: elements
 * @value: Value
 * Return: (Index where value is located), or
 * -1 if not present
 */

int jump_search(int *array, size_t size, int value)
{
	int block, block_size;
	int i = 0, holder = 0;

	if (array == NULL || size == 0)
		return (-1);
	block = sqrt((int)size);
	block_size = block;

	printf("Value checked array[%d] = [%d]\n", holder, array[holder]);

	/* Perform search, */
	while (array[block] <= value && block <= (int)size - 1)
	{
		if (array[i] == value || array[block] == value)
			break;
		holder = block;
		printf("Value checked array[%d] = [%d]\n", holder, array[block]);
		block = block + block_size;
	}

	/* Print the range */
	printf("Value found between indexes [%d] and [%d]\n", holder, block);
	/* Linear search. */
	while (holder <= block)
	{
		/* Checks array */
		if (holder >= (int)size)
			return (-1);
		/*check value */
		printf("Value checked array[%d] = [%d]\n", holder, array[holder]);

		if (array[holder] == value)
			return (holder);
		holder++;
	}

	return (-1);
}
