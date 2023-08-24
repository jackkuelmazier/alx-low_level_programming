#include "main.h"

/**
 * print_number - prints an integer
 * @n: checks if n is negative or positive
 * Return: nothing
 */

void print_number(int n)
{
	int divisor = 1;
	int num1 = n;

	if (n < 0)
	{
		_putchar('-');
		num1 = -num;
	}

	while (num1 / divisor > 9)
		divisor *= 10;

	while (divisor != 0)
	{
		_putchar('0' + num1 / divisor);
		num1 %= divisor;
		divisor /= 10;
	}
}
