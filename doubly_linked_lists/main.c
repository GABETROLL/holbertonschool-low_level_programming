#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	dlistint_t *head = NULL;
	dlistint_t **current = &head;

	insert_dnodeint_at_index(&head, 2, 0);
	add_dnodeint_end(&head, 1);
	insert_dnodeint_at_index(&head, 2, 2);
	add_dnodeint_end(&head, 3);
	insert_dnodeint_at_index(&head, 2, 4);
	add_dnodeint_end(&head, 5);
	insert_dnodeint_at_index(&head, 2, 6);

	print_dlistint(head);

	while (*current)
	{
		printf("prev: %p n: %d next: %p\n", (void *)(**current).prev, (**current).n, (void *)(**current).next);
		current = &(**current).next;
	}

	free_dlistint(head);

	return (0);
}

