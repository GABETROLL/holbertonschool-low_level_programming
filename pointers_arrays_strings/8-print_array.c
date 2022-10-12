#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints array
 * @a: pointer to array
 * @n: number of elements to be printed
 */
void print_array(int *a, int n)
{
	int *current;
	int *max = a + n;

	for (current = a; current < max; current++)
	{
		printf("%d", *current);

		if (current < max - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}

