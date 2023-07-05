#include "main.h"

/**
 * _strlen_recursion - returns string length
 * @s: string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - compare characters of a string
 * @n1: smallest iterator
 * @s: string
 * @n2: largest iteratorr
 * Return: 0
 */
int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - dtects whether a string is palindrome
 * @s: string
 * Return: 1 (palindrome) or 0 (if not)
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
