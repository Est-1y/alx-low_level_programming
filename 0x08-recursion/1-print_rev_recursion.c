#include "main.h"

/**
 * _print_rev_recursion - print the string but in reverse
 * @s: this is the srting to reverse
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
