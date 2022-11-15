#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - Tries to append new tail node that has 'n' as
 * its 'n' attribute to the linked list '**head'.
 *
 * If 'head' is NULL, the new tail is also considered the head.
 *
 * If it fails, it returns NULL.
 *
 * @head: pointer to pointer to head of linked list
 * @n: number to put in new tail nodes 'n' attribute
 * Return: pointer to new node if successful, otherwise: NULL.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_tail = malloc(sizeof(listint_t));
	/* null pointer at the current tail */
	listint_t **null_tail_pointer = head;

	/* make new tail */
	if (new_tail == NULL)
	{
		return (NULL);
	}

	new_tail->n = n;
	new_tail->next = NULL;

	/* find current null pointer */
	while (*null_tail_pointer)
	{
		null_tail_pointer = &(*null_tail_pointer)->next;
	}

	/* connect tail */
	*null_tail_pointer = new_tail;
	return (new_tail);
}

