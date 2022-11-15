#include "lists.h"

/**
 * add_nodeint - Appends node containing 'n' as new head of linked list '**head'
 * at '*head'. If it fails or if 'head' is NULL, return NULL.
 *
 * @head: pointer to head pointer, will be changed to point to new head.
 * Return: address of new node if successful, otherwise NULL.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head = malloc(sizeof(listint_t));

	if (new_head == NULL)
	{
		return (NULL);
	}

	new_head->n = n;
	new_head->next = *head;

	*head = new_head;
	return (*head);
}

