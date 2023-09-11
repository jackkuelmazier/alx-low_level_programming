#include <stdio.h>
#define SUM(x, y) ((x) + (y))

/**
 * main - computes the sum of the numbers x and y
 * Return: 0
 */
int main(void)
{
	int i = 5;
	int j = 7;
	int k = i++;
	int l = j++;
	int sum_kl = SUM(k, l);

	printf("The sum of %d and %d is %d\n", k, l, sum_kl);

	return (0);
}

