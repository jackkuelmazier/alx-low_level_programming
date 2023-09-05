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
	int i, j, k, start, end, words;
	char **s;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (i = 0, words = 0; str[i]; i++)
		if ((str[i] != ' ' && str[i + 1] == ' ')
				|| (str[i] != ' ' && str[i + 1] == '\0'))
			words++;

	s = malloc(sizeof(char *) * (words + 1));
	if (s == NULL)
		return (NULL);

	for (i = 0, k = 0; i < words; i++)
	{
		while (str[k] == ' ')
			k++;
		start = k;
		while (str[k] != ' ' && str[k] != '\0')
			k++;
		end = k;
		s[i] = malloc(sizeof(char) * (end - start + 1));
		if (s[i] == NULL)
		{
			while (--i >= 0)
				free(s[i]);
			free(s);
			return (NULL);
		}
		for (j = start; j < end; j++)
			s[i][j - start] = str[j];
		s[i][j - start] = '\0';
	}
	s[words] = NULL;
	return (s);
}
