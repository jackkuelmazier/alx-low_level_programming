#include "main.h"

/**
 * print_triangle - print a triangle followed by a new line
 *
 * @size: size of a triagle
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size - i; j++)
			_putchar(' ');
		{
			_putchar('#');
		_putchar('\n');
		}
	}
}
