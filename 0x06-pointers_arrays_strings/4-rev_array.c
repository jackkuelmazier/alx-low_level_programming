#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to the first element of the array of integers to be reversed
 * @n: number of elements of the array
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
