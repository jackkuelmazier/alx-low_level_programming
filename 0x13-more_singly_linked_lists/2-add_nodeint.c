#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the
 * beginning of a listint_t list
 * @head: double pointer to the node
 * @n: integer value that will be assigned to
 * new node
 * Return: address of the new element
 * or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add_new_node;

	add_new_node = malloc(sizeof(listint_t));
	if (add_new_node == NULL)
	{
		return (NULL);
	}

	add_new_node->n = n;
	add_new_node->next = *head;
	*head = add_new_node;

	return (add_new_node);
}
