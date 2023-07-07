#include <unistd.h>

/**
 * _putchar - writes c to stdout
 * @c: the character to be printed
 * Return: 1 (success)
 * on error -1 is returned and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
