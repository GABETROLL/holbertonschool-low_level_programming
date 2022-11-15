#include "lists.h"

/**
 * listint_len - Returns the amount of nodes in a linked list.
 * (NEVER counting the null pointer)
 * @h: pointer to linked list
 * Return: length of linked list measured in nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;
	listint_t *current = *(listint_t **) &h;

	while (current)
	{
		len++;
		current = current->next;
	}

	return (len);
}

