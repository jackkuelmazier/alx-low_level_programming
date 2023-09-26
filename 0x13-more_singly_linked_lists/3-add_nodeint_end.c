#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the
 * end of a listint_t list
 * @head: pointer to a pointer
 * @n: integer value
 * Return: address of the new element
 * or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *adds_new_node;
	listint_t *last = *head;

	adds_new_node = malloc(sizeof(listint_t));
	if (adds_new_node == NULL)
	{
		return (NULL);
	}

	adds_new_node->n = n;
	adds_new_node->next = NULL;

	if (*head == NULL)
	{
		*head = adds_new_node;
		return (adds_new_node);
	}

	while (last->next != NULL)
	{
		last = last->next;
	}

	last->next = adds_new_node;

	return (adds_new_node);
}
