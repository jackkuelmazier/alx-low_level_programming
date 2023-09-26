#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique node
 * @head: pointer to an integer
 * Return: 0
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *cat, *pig;
	size_t num_nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	cat = head->next;
	pig = (head->next)->next;

	while (pig)
	{
		if (cat == pig)
		{
			cat  = head;
			while (cat != pig)
			{
				num_nodes++;
				cat = cat->next;
				pig = pig->next;
			}

			cat = cat->next;
			while (cat != pig)
			{
				num_nodes++;
				cat = cat->next;
			}

			return (num_nodes);
		}

		cat = cat->next;
		pig = (pig->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: double pointer
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num_nodes, index = 0;

	num_nodes = looped_listint_len(head);

	if (num_nodes == 0)
	{
		for (; head != NULL; num_nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < num_nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (num_nodes);
}
