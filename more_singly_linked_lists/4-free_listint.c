#include "lists.h"

/**
 * free_listint - Frees all nodes in a linked list
 * @head: head of linked list to free
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *next;

	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
}

