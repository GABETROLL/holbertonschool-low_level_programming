#include "lists.h"

/**
 * get_dnodeint_at_index - get pointer to node at
 * index 'index' in linked list pointed to by 'head'.
 *
 * If the node doesn't exist, you get NULL.
 *
 * @head: pointer to head of linked list
 * @index: index of node to find
 *
 * Return: node at 'index' index if it exists,
 * otherwise: NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int index_count = 0;
	dlistint_t *current = head;

	while (current && index_count < index)
	{
		index_count++;
		current = current->next;
	}

	return (current);
}

