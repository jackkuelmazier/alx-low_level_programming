#include "main.h"

/**
 * is_prime_number - returns 1
 * @n: integer
 * @n: first argument
 * @i: second argument
 * Return: 0
 */

int is_prime_number(int n)
{
	return (is_prime_number_helper(n, 2));
}

int is_prime_number_helper(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_number_helper(n, i + 1));
}
