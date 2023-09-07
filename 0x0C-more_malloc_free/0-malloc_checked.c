#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: argument
 * Return: ptr
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
