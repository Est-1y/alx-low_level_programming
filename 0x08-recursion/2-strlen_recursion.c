#include "main.h"

/**
 * _strlen_recursion - it calculates the length of a string
 * @s: string to br counted
 * Return: integral value
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
