#include <stdio.h>

/**
 * main - the main prints every argument passed to it
 * @argc: number of arguments
 * @argv: arguments array
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
