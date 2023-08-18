#include <unistd.h>

/**
 * print_square - print a square
 *
 * @size: size of a square
 *
 * Return: 0
 */

void print_square(int size)
{
	int _putchar(char c);
	int row, column;

	for (row = 1; row < size; row++)
		_putchar('\n');
	{
		for (column = 1; column < size; column++)
			_putchar('#');
	}
}
