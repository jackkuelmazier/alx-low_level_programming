#include "variadic_functions.h"

#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of arguments
 * @...: integers to sum
 * Return: integer sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, value;
	unsigned int k;
	va_list args;

	va_start(args, n);

	for (k = 0; k < n; k++)
	{
		value = va_arg(args, int);
		sum += value;
	}

	va_end(args);
	return (sum);
}
