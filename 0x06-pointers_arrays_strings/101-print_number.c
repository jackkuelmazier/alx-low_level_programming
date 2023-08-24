#include "main.h"

/**
 * print_number - prints an integer
 * @n: input
 * Return: nothing
 */

void print_number(int n)
{
	int divisor = 1;
	int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	while (num / divisor > 9)
		divisor *= 10;

	while (divisor != 0)
	{
		_putchar('0' + num / divisor);
		num %= divisor;
		divisor /= 10;
	}
}
