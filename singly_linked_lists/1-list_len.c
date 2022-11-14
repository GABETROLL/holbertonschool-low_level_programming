#include "lists.h"

/**
 * list_len - measures and returns length of linked list
 * (counting the NODES, NOT the POINTERS)
 *
 * @h: pointer to linked list
 * Return: amount of nodes in '*h'
 */
size_t list_len(const list_t *h)
{
	size_t size = 0;
	list_t *current = *(list_t **) &h;

	for (; current; size++)
		current = current->next;

	return (size);
}

