#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - print diagonal line
 *
 * @n: The number of times the character is printed
 */

void print_diagonal(int n)
{
	int postn, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (postn = 1; postn <= n; postn++)
		{
			for (space = 1; space <= postn; space++)
				_putchar('_');
			_putchar(92); /*is equal to '/' char*/
			_putchar('\n');
		}
	}
}
