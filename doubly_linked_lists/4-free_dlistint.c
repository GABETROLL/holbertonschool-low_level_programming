#include "lists.h"

/**
 * free_dlistint - frees all the malloc'ed
 * nodes in the linked list pointed to
 * by 'head' (i think)
 *
 * @head: pointer to head of linked list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next;

	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
}

