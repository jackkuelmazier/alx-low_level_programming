#include "variadic_functions.h"

#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * @...: integers to be added
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x, value;
	va_list args;

	va_start(args, n);

	for (x  = 0; x < n; x++)
	{
		value = va_arg(args, int);
		if (x > 0 && separator != NULL)
		{
			printf("%s", separator);
		}
		printf("%d", value);
	}

	printf("\n");
	va_end(args);
}
