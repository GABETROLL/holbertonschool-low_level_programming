#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a linked list
 * starting from 0 at head.
 *
 * If the node doesn't exist, just return NULL.
 *
 * @head: pointer to head of linked list
 * @index: index of node that this funtion will return
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = head;

	while (current && i < index)
	{
		current = current->next;
		i++;
	}

	return (current);
}

