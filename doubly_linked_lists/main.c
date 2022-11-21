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
	dlistint_t *nothing = NULL;
	dlistint_t head = {1, NULL, NULL};
	dlistint_t new = {2, NULL, NULL};

	print_dlistint(nothing);
	print_dlistint(&head);

	head.next = &new;
	new.prev = &head;

	print_dlistint(&head);

	return (0);
}

