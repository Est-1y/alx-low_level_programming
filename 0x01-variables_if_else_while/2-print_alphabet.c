#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry
 * Return: Always 0
 */

int main(void)
{
int lowerCase = 'a';
while (lowerCase <= 'z')
{
putchar(lowerCase);
lowerCase += 1;
}
putchar('\n');
return (0);
}
