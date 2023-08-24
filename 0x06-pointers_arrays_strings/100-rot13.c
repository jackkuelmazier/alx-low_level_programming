#include "main.h"

/**
 * rot13 - encodes a string using rot
 * @str: sting to be returned
 * Return: str
 */

char *rot13(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (('a' <= str[i] && str[i] <= 'z') || ('A' <= str[i] && str[i] <= 'Z'))
		{
			int offset = ('a' <= str[i] && str[i] <= 'z') ? 'a' : 'A';

			str[i] = ((str[i] - offset + 13) % 26) + offset;
		}
		i++;
	}
	return (str);
}
