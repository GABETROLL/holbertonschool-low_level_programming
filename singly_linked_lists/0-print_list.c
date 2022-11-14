#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all items in list pointed to by 'h' in
 * '[len] str' format.
 *
 * When a string is NULL, it prints "[0] (nil)".
 *
 * @h: pointer to head node of list_t
 * Return: number of nodes in h
 */
size_t print_list(const list_t *h)
{
	list_t *current = *(list_t **) &h;
	/* copy 'h' pointer into 'current' */
	size_t count = 0;

	while (current)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", current->len, current->str);
		}

		current = current->next;
		count++;
	}
	return (count);
}

