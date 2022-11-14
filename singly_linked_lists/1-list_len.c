#include "lists.h"

size_t list_len(const list_t *h)
{
	size_t size = 0;
	list_t *current = *(list_t **) &h;

	for (; current; size++)
		current = current->next;

	return (size);
}

