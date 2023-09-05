#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: new_str
 */

char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int i, j, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	new_str = malloc((len1 + len2 + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		new_str[i] = s1[i];
	for (j = 0; j < len2; j++, i++)
		new_str[i] = s2[j];
	new_str[i] = '\0';
	return (new_str);
}
