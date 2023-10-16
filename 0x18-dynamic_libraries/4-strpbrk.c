#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @accept: the set of bytes to be searched for
 * @s: string to be searched
 * Return: if a set is matched - a pointer to the matched byte
 * NULL - if no set is matched
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
