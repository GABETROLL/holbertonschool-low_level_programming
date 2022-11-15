#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Print every int in '*h'.
 *
 * @h: pointer to linked list
 * Return: size of linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t result = 0;
	listint_t *current = *(listint_t **) &h;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		result++;
	}
	return (result);
}

