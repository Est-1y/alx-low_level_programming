#include <stdio.h>
#include "main.h"

/**
 * main - it print name of program
 * @argc: argument number
 * @argv: arguments array
 * Return: 0 (success)
 */

int main(int argc, char **argv)
{
	(void)argc;

	printf("%d\n", *argv[0]);

	return (0);
}
