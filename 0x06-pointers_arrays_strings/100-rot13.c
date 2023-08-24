#include "main.h"

/**
 * rot13 - encodes a string using rot
 * @str: sting to be returned
 * Return: str
 */

char *rot13(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'm')
			str[i] += 13;
		else if (str[i] >= 'n' && str[i] <= 'z')
			str[i] -= 13;
	}
	return (str);
}
