#include "main.h"
/**
 * main - determine if a number is positive or negative
 * positive_or_negative: determine if int i is positive or negative
 *@i: integer
 * Return: void
 */

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
		return (1);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
		return (-1);
	}
	else
	{
	printf("%d is zero\n", i);
	return (0);
	}
}
