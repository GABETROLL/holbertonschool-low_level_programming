#include "lists.h"

/**
 * free_listint2 - Frees all nodes in linked list ('**head')
 * and sets head node pointer ('*head') to NULL.
 * @head: pointer to pointer to head of linked list.
 * Will be used to make head pointer NULL.
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next;

	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*head = NULL;
}

