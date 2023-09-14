#include "variadic_functions.h"

#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * @...: numbers to be summed
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int k;
	va_list args;

	va_start(args, n);

	for (k = 0; k < n; k++)
	{
		char *value = va_arg(args, char*);

		if (k > 0 && separator != NULL)
		{
			printf("%s", separator);
		}
		if (value == NULL)
		{
			printf("(nil)");
		} else
		{
			printf("%s", value);
		}
	}

	printf("\n");
	va_end(args);
}
