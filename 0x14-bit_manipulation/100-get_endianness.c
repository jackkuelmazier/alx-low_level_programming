#include <stdio.h>
#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int v = 1;
	char *x = (char *)&v;

	return ((int)*x);
}
