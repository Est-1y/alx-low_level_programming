#include "main.h"

/**
 * clear_bit - it places the value of a given bit to 0
 * @n: the pointer to the number to be changed
 * @index: the index of bit to be cleared
 * Return: 1 (success) -1 (fail)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
