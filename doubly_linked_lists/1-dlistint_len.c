#include "lists.h"

/**
 * dlistint_len - Get the length of a linked list
 * in 'h'.
 *
 * If h is NULL, just return 0.
 *
 * @h: linked list pointer
 * Return: length of linked list in h.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t *current = *(dlistint_t **) &h;

	while (current)
	{
		count++;
		current = current->next;
	}

	return (count);
}

