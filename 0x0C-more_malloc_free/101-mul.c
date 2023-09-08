#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * print_string - takes a pointer to a string
 * @str: string
 * Return: nothing
 */
void print_string(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

/**
 * print_error - prints an error message
 * Return: nothing
 */

void print_error(void)
{
	print_string("Error\n");
	exit(98);
}

/**
 * string_to_int - prints the character
 * @str: string
 * Return: result
 */
int string_to_int(char *str)
{
	int result = 0;

	while (*str)
	{
		if (*str < '0' || *str > '9')
			print_error();
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result);
}

/**
 * int_to_string - takes an integer and a pointer
 * @num: number of integers
 * @buffer: buffer
 * Return: nothing
 */
void int_to_string(int num, char *buffer)
{
	int i;
	int length = 0;

	while (num)
	{
		buffer[length++] = (num % 10) + '0';
		num /= 10;
	}
	for (i = 0; i < length / 2; i++)
	{
		char temp = buffer[i];

		buffer[i] = buffer[length - i - 1];
		buffer[length - i - 1] = temp;
	}
	buffer[length] = '\0';
}
/**
 * main - multiplies two positive numbers
 * @argc: integer that represents the number of arguments
 * @argv: array of pointers to strings
 * Return: 0
 */
int main(int argc, char **argv)
{
	int num1, num2, result;
	char buffer[100];

	if (argc != 3)
		print_error();

	num1 = string_to_int(argv[1]);
	num2 = string_to_int(argv[2]);
	result = num1 * num2;

	int_to_string(result, buffer);
	print_string(buffer);
	print_string("\n");
	return (0);
}
