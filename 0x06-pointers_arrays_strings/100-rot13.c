#include "main.h"
#include <ctype.h>

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
		if (isalpha(str[i]))
		{
			char offset = isupper(str[i]) ? 'A' : 'a';

			str[i] = ((str[i] - offset + 13) % 26) + offset;
		}
	}
	return (str);
}
