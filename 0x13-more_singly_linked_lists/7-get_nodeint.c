#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * of a listint_t linked list
 * @head: pointer to a listint_t node
 * @index: unsigned integer value that represents
 * the index of a node
 * Return: head
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int y;

	for (y = 0; y < index; y++)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
	}

	return (head);
}
