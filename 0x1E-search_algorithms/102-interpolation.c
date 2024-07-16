#include "search_algos.h"

/**
 * interpolation_search - search algorithm
 * @array: Points to the first element.
 * @size: elements number
 * @value: Value.
 * Return: (Index where value is located),
 * or (-1 if not present)
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;
	size_t pos;
	double formula;

	if (array == NULL)
		return (-1);

	/* loop search */
	while (low <= high && value >= array[low] && value <= array[high])
	{
		formula = (((double)(high - low) / (array[high] - array[low]))
						* (value - array[low]));
		/* Calculating the position*/
		pos = (size_t)(low + formula);

		/* Print value.*/
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		/* Check if value is found. */
		if (array[pos] == value)
			return (pos);

		/* Adjust search range. */
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
