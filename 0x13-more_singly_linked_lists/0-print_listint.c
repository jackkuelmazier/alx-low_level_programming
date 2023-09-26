#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_listint - prints all the elements
 * of a listint_t list
 * @h: pointer to an integer
 * Return: number_of_node
 */
size_t print_listint(const listint_t *h)
{
	size_t number_of_node = 0;

	while (h)
	{
		printf("%d\n", h->n);
		number_of_node++;
		h = h->next;
	}

	return (number_of_node);
}
