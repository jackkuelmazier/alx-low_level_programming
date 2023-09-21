#include <stdio.h>

/**
 * my_function - prints a sentence before the main function
 * is executed
 * Return: nothing
 */
void __attribute__((constructor)) my_function(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
