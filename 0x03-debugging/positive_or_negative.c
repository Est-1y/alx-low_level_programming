#include "main.h"

/**
 * main - Determine if number is positive, negative or zero
(* 0 : is the number to be checked
 * Return: 0 (success)
 */
void positive_or_negative(int i)
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

