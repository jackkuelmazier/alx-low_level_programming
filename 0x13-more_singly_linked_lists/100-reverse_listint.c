#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to the node
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous_node = NULL;
	listint_t *next_node;

	while (*head != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = previous_node;
		previous_node = *head;
		*head = next_node;
	}

	*head = previous_node;

	return (*head);
}
