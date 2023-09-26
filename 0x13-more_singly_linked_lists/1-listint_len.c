#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements
 * in a linked listint_t list
 * @h: pointer to an integer
 * Return: number_of_nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t number_of_nodes = 0;

	while (h)
	{
		number_of_nodes++;
		h = h->next;
	}

	return (number_of_nodes);
}
