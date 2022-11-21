#include "lists.h"

/**
 * sum_dlistint - read return description
 *
 * @head: pointer to head of linked list
 *
 * Return: sum of all ints in all nodes
 * of linked list pointed to by head
 */
int sum_dlistint(dlistint_t *head)
{
	int result = 0;
	dlistint_t *current = head;

	while (current)
	{
		result += current->n;
		current = current->next;
	}

	return (result);
}

