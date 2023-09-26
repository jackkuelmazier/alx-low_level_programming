#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of all the data
 * (n) of a listint_t linked list
 * @head: pointer to an integer
 * Return: number of sum
 */
int sum_listint(listint_t *head)
{
	int num_sum = 0;
	listint_t *current_node = head;

	while (current_node != NULL)
	{
		num_sum += current_node->n;
		current_node = current_node->next;
	}

	return (num_sum);
}
