#include "main.h"

int is_prime_helper(int n, int i);

/**
 * is_prime_number - returns 1
 * @n: integer
 * Return: 1
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - takes two arguments
 * @n: integer
 * @i: interation times
 * Return: 1 or 0
 */

int is_prime_helper(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime_helper(n, i + 1));
}
