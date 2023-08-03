#include "main.h"

/**
 * get_bit - it returns the value of a bit  in a decimal number
 * @n: search no
 * @index: the bit index
 * Return: the bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
