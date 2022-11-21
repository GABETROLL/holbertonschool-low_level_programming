#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlinked_list - Prints attrs of each node
 * in linked list at address 'node'.
 *
 * @node: node
 * Return: nothing
 */
void print_dlinked_list(dlistint_t *node)
{
	while (node)
	{
		printf("prev: %p n: %d next: %p\n", (void *)node->prev, node->n, (void *)node->next);
		node = node->next;
	}
}

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	dlistint_t *head = NULL;
	int index_count;

	for (index_count = 0; index_count < 5; index_count++)
	{
		insert_dnodeint_at_index(&head, 2, index_count);
		printf("Added node with n attribute as %d at index 2:\n", index_count);
		print_dlinked_list(head);

		add_dnodeint_end(&head, index_count);
		printf("Added node with n attribute as %d at end:\n", index_count);
		print_dlinked_list(head);
	}

	return (0);
}

