#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given
 * as a parameter on each element of an array
 * @array: pointer to an integer
 * @size: array size
 * @action: takes an integer as an
 * argument and returns nothing
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
