#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: double pointer to an integer
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *current_node;

	if (head == NULL)
		return;

	while (*head)
	{
		current_node = (*head)->next;
		free(*head);
		*head = current_node;
	}

	*head = NULL;
}
