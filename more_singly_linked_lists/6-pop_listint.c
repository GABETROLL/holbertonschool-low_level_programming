#include "lists.h"

/**
 * pop_listint - deletes head node of linked list at '**head'.
 * If '*head' or 'head are NULL, just return 0.
 *
 * @head: pointer to pointer to head node of linked list
 * Will be used to change '*head' from the current head,
 * to its child.
 * Return: 'n' attribute of '**head' if '*head' is not NULL,
 * otherwise 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *old_head;
	int n;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	old_head = *head;

	n = old_head->n;

	*head = (**head).next;

	free(old_head);

	return (n);
}

