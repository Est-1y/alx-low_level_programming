#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
 * is_prime_number - check if a no is prime
 * @n: no to be checked
 * Return: 1 (prime) or 0 (not prime)
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, n - 1));
}

/**
 * check_prime - it checks if a no is prime
 * @n: no to be checked
 * @i: iteration times
 * Return: 1 (prime no) or 0 (composite)
 */

int check_prime(int n, int i)
{
	if (i == 1)
		return (1);

	if (n % i == 0 && i > 1)
		return (0);

	return (check_prime(n, i - 1));
}
