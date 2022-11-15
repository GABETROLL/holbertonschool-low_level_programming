#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - Deletes node at the 'index' index of
 * the linked list '**head', counting from 0 at head, and
 * connects the previous node with the next node at that index.
 *
 * Skips the last 2 steps if there are no previous or next nodes.
 *
 * If 'head' or '*head' are NULL or if there is no 'index'-th
 * node in the list, just it returns -1.
 *
 * @head: pointer to pointer to head of linked list
 * @index: index of node in linked list to be deleted
 * Return: 1 if succeded, otherwise -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int index_count = 0;
	listint_t **delete_pointer = head;
	listint_t *new_next_node;

	while (1)
	{
		if (delete_pointer == NULL)
			return (-1);
		if (*delete_pointer == NULL)
			return (-1);

		if (index_count == index)
			break;

		delete_pointer = &(**delete_pointer).next;
		index_count++;
	}

	/* node after deleted node */
	new_next_node = (**delete_pointer).next;
	/* free node that's supposed to be deleted */
	free(*delete_pointer);
	/*
	 * make the pointer of the previous node ('*delete_pointer')
	 * point to the node after the deleted node
	 */
	*delete_pointer = new_next_node;

	return (1);
}

