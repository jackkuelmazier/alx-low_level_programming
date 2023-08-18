#include "main.h"

/**
 * print_triangle - print a triangle followed by a new line
 *
 * @size: size of a triagle
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
