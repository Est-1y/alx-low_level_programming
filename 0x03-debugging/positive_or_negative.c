#include "main.h"
/**
 * positive_or_negative - test if a number is positive
 * or negative
 * @i: shows if no is positive or negative
 * Return: void
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
