#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory
 * @b: constant byte
 * @n: number of bytes to fill
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		s[x] = b;
	return (s);
}

