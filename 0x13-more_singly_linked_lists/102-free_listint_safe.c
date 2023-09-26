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
	size_t num_nodes = 0;
	listint_t *slow_ptr, *fast_ptr, *free_ptr;

	if (h == NULL || *h == NULL)
		return (0);

	slow_ptr = *h;
	fast_ptr = *h;

	while (slow_ptr && fast_ptr && fast_ptr->next)
	{
		num_nodes++;
		free_ptr = slow_ptr;
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;
		free(free_ptr);

		if (slow_ptr == fast_ptr)
		{
			*h = NULL;
			return (num_nodes);
		}
	}

	while (slow_ptr != NULL)
	{
		num_nodes++;
		free_ptr = slow_ptr;
		slow_ptr = slow_ptr->next;
		free(free_ptr);
	}

	*h = NULL;
	return (num_nodes);
}
