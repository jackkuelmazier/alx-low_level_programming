#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string that represents a binary number
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int bin_num = 0;

	if (!b)
	{
		return (0);
	}
	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		bin_num <<= 1;
		if (*b == '1')
		{
			bin_num |= 1;
		}
		b++;
	}
	return (bin_num);
}
