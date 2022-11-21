#include "lists.h"

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

