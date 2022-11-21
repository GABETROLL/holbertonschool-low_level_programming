#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Prints every n attribute
 * of every node in the list in '*h', followed
 * by a new line.
 *
 * If h is NULL, just do nothing
 *
 * @h: pointer to linked list
 * Return: number of nodes in linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t *current = *(dlistint_t **) &h;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}

	return (count);
}

