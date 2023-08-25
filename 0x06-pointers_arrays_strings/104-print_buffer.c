#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: input
 * @size: input
 * Return: new line
 */

void print_buffer(char *b, int size)
{
	int i, j;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
				printf("%02x", b[i + j]);
			else
				printf("  ");
			if ((j + 1) % 2 == 0)
				printf(" ");
		}
		for (j = 0; j < 10; j++)
		{
			if (i + j < size && b[i + j] >= ' ' && b[i + j] <= '~')
				printf("%c", b[i + j]);
			else if (i + j < size)
				printf(".");
		}
		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}
