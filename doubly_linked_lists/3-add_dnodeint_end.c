#include "lists.h"

/**
 * Adds a new tail node to the linked list
 * in '*head' that contains 'n' as its 'n'
 * attribute.
 *
 * If head is NULL, or adding the new node
 * fails, return NULL.
 *
 * If the linked list has no nodes (meaning head
 * points to a null pointer), the new tail
 * is also the new head.
 *
 * @head: pointer to pointer to linked list
 * head node
 * @n: value to put in new node
 * Return: pointer to new node if successful
 * and head wasn't NULL, otherwise: NULL.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	/*
	 * the names say what's being pointed
	 * to by the chain of pointers in
	 * each variable
	 */
	dlistint_t **tail;
	dlistint_t *new_tail;

	if (head == NULL)
		return (NULL);

	tail = head;

	while (*tail)
		tail = & (**tail).next;

	new_tail = malloc(sizeof(dlistint_t));
	if (new_tail == NULL)
		return (NULL);

	new_tail->n = n;
	new_tail->prev = *tail;
	new_tail->next = NULL;

	*tail = new_tail;

	return (new_tail);
}

