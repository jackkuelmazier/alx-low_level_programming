#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: pointer to the first character of the string to be encoded into 1337
 * Return: s
 */

char *leet(char *s)
{
	int i, j;

	char *letters = "aAeEoOtTlL";
	char *numbers = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = numbers[j];
				break;
			}
		}
	}
	return (s);
}
