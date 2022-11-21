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
	int index = 1;
	dlistint_t *head = NULL;
	dlistint_t **current = &head;

	add_dnodeint_end(NULL, 0);

	for (; index <= 10; index++)
		add_dnodeint_end(&head, index);

	print_dlistint(head);

	while (*current)
	{
		printf("prev: %p n: %d next: %p\n", (void *)(**current).prev, (**current).n, (void *)(**current).next);
		current = & (**current).next;
	}

	return (0);
}

