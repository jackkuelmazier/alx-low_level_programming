#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to an integer
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *current_node;

	while (head)
	{
		current_node = head->next;
		free(head);
		head = current_node;
	}
}
