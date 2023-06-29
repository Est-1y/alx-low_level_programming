#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character ro print
 * Return: 1 (success)
 * On error, -1 is returned, and erno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
