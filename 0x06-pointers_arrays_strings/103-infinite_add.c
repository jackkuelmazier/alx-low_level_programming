#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: the buffer that the function will use to store the result
 * @size_r: the buffer size
 * Return: r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = strlen(n1) - 1, j = strlen(n2) - 1, k = 0, carry = 0;

	while (i >= 0 || j >= 0 || carry)
	{
		int sum = carry;

		if (i >= 0)
			sum += n1[i--] - '0';
		if (j >= 0)
			sum += n2[j--] - '0';
		r[k++] = sum % 10 + '0';
		carry = sum / 10;
	}
	if (k >= size_r)
		return (0);
	r[k] = '\0';
	for (i = 0; i < k / 2; i++)
	{
		char temp = r[i];

		r[i] = r[k - i - 1];
		r[k - i - 1] = temp;
	}
	return (r);
}
