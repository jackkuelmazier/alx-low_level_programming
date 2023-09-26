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
	const listint_t *slow_ptr = head, *fast_ptr = head;

	if (head == NULL)
	{
		exit(98);
	}

	while (slow_ptr != NULL && fast_ptr != NULL && fast_ptr->next != NULL)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;

		if (slow_ptr == fast_ptr)
		{
			while (head != slow_ptr)
			{
				printf("[%p] %d\n", (void *)head, head->n);
				head = head->next;
				num_nodes++;
			}
			printf("[%p] %d\n", (void *)head, head->n);
			num_nodes++;
			return (num_nodes);
		}
	}

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		num_nodes++;
	}
	return (num_nodes);
}
