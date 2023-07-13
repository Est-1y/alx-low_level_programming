#include "main.h"
#include <stdlib.h>

/**
 * array_range -creates array of integers
 * @min: minimum range of values
 * @max: maximum range of values
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *a, i = 0;

	if (min > max)
		return (NULL);

	a = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (a == NULL)
		return (NULL);

	while (min <= max)
	{
		a[i] = min;
		i++;
		min++;
	}

	return (a);
}
