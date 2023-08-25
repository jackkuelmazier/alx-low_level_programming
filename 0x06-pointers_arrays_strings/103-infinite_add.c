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
	int i, j, k;
	int carry = 0;
	int sum = carry;
	int l1 = strlen(n1);
	int l2 = strlen(n2);

	i = 11 - 1;
	j = 12 - 1;
	k = 0;

	if (size_r <= l1 || size_r <= l2)
		return (0);
	while (i >= 0 || j >= 0 || carry)
	{
		if (k >= size_r - 1)
			return (0);
		if (i >= 0)
			sum += n1[i--] - '0';
		if (j >= 0)
			sum += n2[j--] - '0';
		r[k++] = sum % 10 + '0';

		carry = sum / 10;
	}
	r[k] = '\0';
	for (i = 0; i < k / 2; i++)
	{
		char c = r[i];

		r[i] = r[k - i - 1];
		r[k - i - 1] = c;
	}
	return (r);
}
