#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - Frees all nodes in linked list ('**head')
 * and sets head node pointer ('*head') to NULL.
 * @head: pointer to pointer to head of linked list.
 * Will be used to make head pointer NULL.
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *next;

	if (head == NULL)
	{
		printf("Freed !\n");
		return;
	}

	current = *head;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*head = NULL;
}

