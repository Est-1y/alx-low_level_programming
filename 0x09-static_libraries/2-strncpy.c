#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: destination string pointer
 * @src: source string pointer
 * @n: number of bytes
 * Return: pointer to destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int count_of_bytes;

	for (count_of_bytes = 0; count_of_bytes < n &&
			src[count_of_bytes] != '\0'; count_of_bytes++)
	dest[count_of_bytes] = src[count_of_bytes];

	for (; count_of_bytes < n; count_of_bytes++)
	dest[count_of_bytes] = '\0';

	return (dest);
}
