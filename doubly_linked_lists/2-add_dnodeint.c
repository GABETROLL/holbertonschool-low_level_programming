#include "lists.h"

/**
 * add_dnodeint - Adds new head to linked list
 * in *head.
 *
 * If head is NULL or if creating a new head
 * fails, return NULL.
 *
 * @head: linked list head pointer pointer
 * @n: value of new head node
 *
 * Return: pointer to new head if successful
 * and if head is not NULL,
 * otherwise NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_head;

	/* check if head is NULL */
	if (head == NULL)
		return (NULL);

	/* try to make new head */
	new_head = malloc(sizeof(dlistint_t));
	if (new_head == NULL)
		return (NULL);

	new_head->n = n;
	new_head->prev = NULL;
	/* doesn't matter if it's NULL or not */
	new_head->next = *head;

	/*
	 * *head could be NULL, meaning linked
	 * list is empty. if it isn't,
	 * make its previous pointer point
	 * to the new head.
	 */
	if (*head)
		(**head).prev = new_head;

	/* make head pointer point to new head */
	*head = new_head;

	return (new_head);
}

