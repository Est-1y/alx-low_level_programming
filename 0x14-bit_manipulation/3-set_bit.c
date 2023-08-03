#include "main.h"

/**
 * set_bit - it sets a bit at a given index
 * @n: the pointer to number to be changed
 * @index: the index of the bit
 * Return: 1 (success), -1 (fail)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
