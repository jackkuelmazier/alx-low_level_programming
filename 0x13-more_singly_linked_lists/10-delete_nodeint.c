#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list
 * @head: pointer
 * @index: index of the node that should be deleted
 * index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node;
	listint_t *next_node;
	unsigned int z;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	current_node = *head;

	if (index == 0)
	{
		*head = current_node->next;
		free(current_node);
		return (1);
	}

	for (z = 0; z < index - 1; z++)
	{
		if (current_node == NULL)
		{
			return (-1);
		}
		current_node = current_node->next;
	}

	if (current_node == NULL || current_node->next == NULL)
	{
		return (-1);
	}
	next_node = current_node->next->next;
	free(current_node->next);
	current_node->next = next_node;

	return (1);
}
