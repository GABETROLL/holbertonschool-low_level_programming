#include "lists.h"

/**
 * free_list - frees all nodes and their string attributes
 * in a linked list.
 *
 * The list should have been made by the function
 * 'add_node_end' in this directory's '3-add_node_end.c' file.
 *
 * @head: head of linked list
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *current = head;

	while (current)
	{
		list_t *next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}

