#include "main.h"

/**
 * rot13 - encodes a string using rot
 * @s: sting to be returned
 * Return: str
 */

char *rot13(char *s)
{
	int x;

	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *ptr = s;

	while (*s)
	{
		for (x = 0; x <= 52; x++)
		{
			if (*s == rot13[x])
			{
				*s = ROT13[x];
				break;
			}
		}
		s++;
	}
	return (ptr);
}
