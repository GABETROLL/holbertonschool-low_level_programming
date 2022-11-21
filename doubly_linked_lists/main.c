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

	for (; index <= 10; index++)
	{
		dlistint_t *test = get_dnodeint_at_index(head, 1);

		if (test)
			printf("%d\n", test->n);
		else
			printf("(nil)\n");

		add_dnodeint_end(&head, index);
	}

	free_dlistint(head);

	return (0);
}

