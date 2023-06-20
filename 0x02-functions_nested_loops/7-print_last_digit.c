#include "main.h"

/**
 * print_last_digit - printing the last digit of any number
 * @n: The number to be printed
 * Return: Value of the last digit of a number
 */

int print_last_digit(int n)

{

int last;

last = n % 10;
if (last < 0)
{
last = last * -1;
}
_putchar(last + '0');
return (last);

}
