#include "stdio.h"

/**
 * main - printing i if positive or negative
 * positive_or_negative - tests funtion printing integer
 * @i: -  Parameter i shows void for positive or negative
 * 0 : is the number to be checked
 * Return: 0 (success)
 */
void positive_or_negative(int i);
{
if (i < 0)
{
printf("%d is %s\n", i, "negative");
}
else if (i > 0)
{
printf("%d is %s\n", i, "positive");
}
else
{
printf("%d is %s\n", i, "zero");
}
return;
}

int main(void)
{
int number = 10;
positive_or_negative(number);
return (0);
}

