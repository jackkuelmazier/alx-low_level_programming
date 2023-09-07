#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - multiplies two positive numbers
 * @argc: integer that represents the number of arguments
 * @argv: array of pointers to strings
 * Return: 0
 */

int main(int argc, char **argv)
{
	int j, i, num1, num2, result;
	char buffer[100];

	if (argc != 3)
	{
		write(1, "Error\n", 6);
		exit(98);
	}
	for (i = 1; i <= 2; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				write(1, "Error\n", 6);
				exit(98);
			}
		}
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	sprintf(buffer, "%d", result);
	write(1, buffer, strlen(buffer));
	write(1, "\n", 1);
	return (0);
}
