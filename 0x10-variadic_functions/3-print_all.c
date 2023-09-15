#include "variadic_functions.h"

#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: lists of types of arguments
 * passed to the function
 * @...: integer sum
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int z = 0;
	char c, *s;

	va_start(args, format);

	while (format[z])
	{
		c = format[z];
		if (c == 'c')
		{
			printf("%c", va_arg(args, int));
		} else if (c == 'i')
		{
			printf("%d", va_arg(args, int));
		} else if (c == 'f')
		{
			printf("%f", va_arg(args, double));
		} else if (c == 's')
		{
			s = va_arg(args, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
		}
		if (format[z + 1] && (c == 'c' || c == 'i' || c == 'f' || c == 's'))
			printf(", ");
		z++;
	}
	printf("\n");
	va_end(args);
}
