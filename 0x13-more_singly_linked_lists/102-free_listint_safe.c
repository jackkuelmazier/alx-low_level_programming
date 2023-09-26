#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: double pointer to an integer listint_t
 * Return: size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t x = 0;
	int w;
	listint_t *num_node;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		w = *h - (*h)->next;
		if (w > 0)
		{
			num_node = (*h)->next;
			free(*h);
			*h = num_node;
			x++;
		}
		else
		{
			free(*h);
			*h = NULL;
			x++;
			break;
		}
	}

	*h = NULL;

	return (x);
}
