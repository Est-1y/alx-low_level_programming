#include <stdio.h>
/**
 * main - it prints any no of argument that is
 * passed into it
 * @argc: - number of arguments
 * @argv: arguments array
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
