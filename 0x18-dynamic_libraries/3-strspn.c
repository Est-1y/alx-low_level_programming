#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @accept: the prefix to be measured
 * @s: string to be searched
 * Return: number of bytes in s consisting of
 * only bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}

			else if (accept[index + 1] == '\0')
				return (bytes);
		}

		s++;
	}
	return (bytes);
}
