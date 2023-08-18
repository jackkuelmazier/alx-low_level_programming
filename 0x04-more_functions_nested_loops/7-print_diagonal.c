#include "main.h"

/**
 * print_diagonal - print diagonal line
 *
 * @n: The number of times the character is printed
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
				_putchar('_');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
