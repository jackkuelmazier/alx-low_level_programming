#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n)
 * @head: double pointer to an integer
 * Return: number if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *head_node;

	if (*head == NULL)
	{
		return (0);
	}

	head_node = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(head_node);

	return (n);
}
