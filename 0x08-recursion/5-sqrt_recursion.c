#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer
 * Return: -1
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	while (i * i <= n)
	{
		if (i * i == n)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
