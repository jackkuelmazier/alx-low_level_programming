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
	va_list print;
	unsigned int k = 0;
	char *s, *separator;

	va_start(print, format);

	separator = "";

	while (format && format[k])
	{
		switch (format[k])
		{
			case 'c':
				printf("%s%c", separator, va_arg(print, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(print, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(print, double));
				break;
			case 's':
				s = va_arg(print, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", separator, s);
				break;
			default:
				k++;
				continue;
		}
		separator = ", ";
		k++;
	}
	printf("\n");
	va_end(print);
}
