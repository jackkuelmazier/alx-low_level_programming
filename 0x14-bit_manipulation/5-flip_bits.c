#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @n: first input number
 * @m: second input number
 * Return: number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bin = n ^ m;
	unsigned int number = 0;

	while (bin)
	{
		number += bin & 1;
		bin >>= 1;
	}
	return (number);
}
