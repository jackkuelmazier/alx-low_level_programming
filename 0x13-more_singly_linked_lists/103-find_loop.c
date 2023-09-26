#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to an integer listint_t
 * Return: address of the node where the loop starts
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *cat, *pig;

	if (head == NULL)
		return (NULL);

	cat = head;
	pig = head;

	while (cat && pig && pig->next)
	{
		cat = cat->next;
		pig = pig->next->next;

		if (cat == pig)
		{
			cat = head;
			while (cat != pig)
			{
				cat = cat->next;
				pig = pig->next;
			}
			return (cat);
		}
	}
	return (NULL);
}
