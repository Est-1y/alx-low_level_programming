#include "main.h"

/**
 * _abs - Compute the absolute value of integer
 * @c: The number to be computed
 * Return: Absolute value of number or 0
 */

int _abs(int c)

{

if (c < 0)
{
int abs_val;

abs_val = c * -1;
return (abs_val);
}
return (c);
}
