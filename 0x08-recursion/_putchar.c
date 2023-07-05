#include <unistd.h>

/**
 * _putchar - this is _putchar
 * @c: this is the integer
 * Return:  1
 */

int _putchar(char c)
{
return (write(STDOUT_FILENO, &c, 1));
}
