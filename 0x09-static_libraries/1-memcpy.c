#include "main.h"

/**
 * _memcpy - function copies @n bytes from memory area @src
 * to @dest memory area
 * @src: these are bytes from memory area
 * @n: the function copies
 * @dest: bytes to memory area
 * Return: a pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
