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

	add_dnodeint_end(NULL, 0);

	for (; index <= 10; index++)
		add_dnodeint_end(&head, index);

	print_dlistint(head);

	return (0);
}

