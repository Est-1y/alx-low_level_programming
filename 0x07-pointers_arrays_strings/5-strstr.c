#include "main.h"

/**
 * _strstr - locates a substring
 * @needle: substring to be located
 * @haystack: string to be searched
 * Return: if substring is located - a pointer the the beginning
 *of the located substring
 * NULL - if the substring is not located
 */

char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);

				index++;

			} while (haystack[index] == needle[index]);
		}
		haystack++;
	}
	return ('\0');
}
