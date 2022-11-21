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
	dlistint_t head = {1, NULL, NULL};
	dlistint_t new =  {2, NULL, NULL};

	printf("%ld\n", dlistint_len(NULL));
	printf("%ld\n", dlistint_len(&head));

	head.next = &new;
	new.prev = &head;

	printf("%ld\n", dlistint_len(&head));

	return (0);
}

