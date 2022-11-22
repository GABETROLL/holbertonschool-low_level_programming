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
	dlistint_t *head = NULL;
	int index_count;
	int max_node_count = 3;
	int result;

	for (index_count = 0; index_count < max_node_count; index_count++)
		add_dnodeint_end(&head, index_count);

	print_dlinked_list(head);

	for (; index_count >= 0; index_count -= 2)
	{
		printf("Deleting node at index %d:\n", index_count);
		result = delete_dnodeint_at_index(&head, index_count);
		print_dlinked_list(head);
		printf("\nOutput: %d\n\n", result);

		printf("Deleting node at index 0:\n");
		result = delete_dnodeint_at_index(&head, 0);
		print_dlinked_list(head);
		printf("\nOutput: %d\n\n", result);
	}

	printf("Deleting node at index 0:\n");
	result = delete_dnodeint_at_index(&head, index_count);
	print_dlinked_list(head);
	printf("\nOutput: %d\n\n", result);

	return (0);
}

