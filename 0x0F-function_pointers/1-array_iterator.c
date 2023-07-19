#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - print each array elem on a new line
 * @array: the array
 * @size: no of elem to print
 * @action: pointer to be printed in regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;


	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
