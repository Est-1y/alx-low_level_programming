#include "main.h"

/**
 * main - tests funtion that prints if integer is positive or negative
 * @i: -  Parameter i shows void for positive or negative
(* 0 : is the number to be checked
 * Return: 0 (success)
 */
void positive_or_negative(int i);
{
if (i < 0)
{
printf("%d is %s\n", i, "negative");
}
else
{
if (i > 0)
{
printf("%d is %s\n", i, "positive");
}
else
{
printf("%d is %s\n", i, "zero");
}
return;
}
}

