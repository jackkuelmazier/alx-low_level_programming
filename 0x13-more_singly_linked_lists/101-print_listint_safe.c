#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: double pointer
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num_nodes = 0;
	const listint_t *slow_ptr, *fast_ptr;

	if (head == NULL)
		exit(98);

	slow_ptr = head;
	fast_ptr = head;

	while (slow_ptr && fast_ptr && fast_ptr->next)
	{
		printf("[%p] %d\n", (void *)slow_ptr, slow_ptr->n);
		num_nodes++;

		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;

		if (slow_ptr == fast_ptr)
		{
			printf("-> [%p] %d\n", (void *)slow_ptr, slow_ptr->n);
			return (num_nodes);
		}
	}

	while (slow_ptr != NULL)
	{
		printf("[%p] %d\n", (void *)slow_ptr, slow_ptr->n);
		num_nodes++;
		slow_ptr = slow_ptr->next;
	}

	return (num_nodes);
}
