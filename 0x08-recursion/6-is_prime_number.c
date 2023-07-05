#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
 * is_prime_number - shows if a no is prime
 * @n: no to be checked
 * Return: integral value
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - it checks if a no is prime
 * @n: no to be checked
 * @i: iteration times
 * Return: 1 (prime no) or 0 (composite)
 */

int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < 1)
		return (1);
	return (check_prime(n, i + 1));
}
