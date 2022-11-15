#include "lists.h"

/**
 * sum_listint - Returns the sum of all 'n' attributes
 * of linked list '*head'. (Returns 0 if 'head'
 * is NULL)
 *
 * @head: pointer to linked list
 * Return: sum of all 'n' attributes of linked list
 * '*head' if 'head' isn't NULL, otherwise 0.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}

