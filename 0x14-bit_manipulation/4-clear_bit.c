#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to an unsigned long integer
 * @index: an unsigned integer that represents the position
 * of the bit you want to set in the number pointed to by n
 * Return: number
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
	{
		return (-1);
	}
	*n &= ~(1UL << index);
	return (1);
}
