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
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

/**
 * print_int - prints each element of the array
 * @n: integer number
 */
void print_int(int n)
{
	printf("%d\n", n);
}
