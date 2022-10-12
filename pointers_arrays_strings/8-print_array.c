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

	for (current = a; current < max - 1; current++)
	{
		printf("%d, ", *current);
	}
	printf("%d", *current);
	printf("\b\b\n");
}

