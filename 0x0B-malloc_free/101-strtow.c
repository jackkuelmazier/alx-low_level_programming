#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - splits a string into words
 * @str: input string
 * Return: s
 */

char **strtow(char *str)
{
	int i, k, l, words = 0, len = 0;
	char **s;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (i = 0; str[i]; i++)
		if ((str[i] == ' ' || str[i + 1] == '\0') && str[i + 1 - (i != 0)] != ' ')
			words++;

	s = malloc(sizeof(char *) * (words + 1));
	if (s == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		if ((str[i] == ' ' || str[i + 1] == '\0') && str[i + 1 - (i != 0)] != ' ')
		{
			s[k] = malloc(sizeof(char) * (len + 1));
			if (s[k] == NULL)
			{
				while (--k >= 0)
					free(s[k]);
				free(s);
				return (NULL);
			}
			for (l = len - 1; l >= 0; l--)
				s[k][l] = str[(i - len) + l + (len != i)];
			s[k++][l] = '\0';
			len = -1;
		}
	s[k] = NULL;
	return (s);
}
