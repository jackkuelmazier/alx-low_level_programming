#include <stdio.h>


/**
 * swap_int - swaps the values of two integers
 * @a: firs integer
 * @b: second integer
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
