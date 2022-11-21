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
		printf("prev: ");
		if (node->prev)
			printf("%d ", (node->prev)->n);
		else
			printf("(nil) ");

		printf("n: %d ", node->n);

		printf("next: ");
		if (node->next)
			printf("%d", (node->next)->n);
		else
			printf("(nil)");

		printf("\n");

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
	int max_index = 5;
	int insert_index = 0;

	for (; insert_index < max_index; insert_index++)
	{
		dlistint_t *head = NULL;
		int index_count;

		printf("STARTING NEW LOOP WITH INSER INDEX %d.\n", insert_index);

		for (index_count = 0; index_count < 5; index_count++)
		{
			insert_dnodeint_at_index(&head, insert_index, index_count);
			printf("Added node with n attribute as %d at index %d:\n", index_count, insert_index);
			print_dlinked_list(head);

			add_dnodeint_end(&head, index_count);
			printf("Added node with n attribute as %d at end:\n", index_count);
			print_dlinked_list(head);
		}
	}

	return (0);
}

