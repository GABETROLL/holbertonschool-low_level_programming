#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all numbers in [n, 98].
 * @n: start of the counting function
 * Return: void
 */
void print_to_98(int n)
{
	int current;

	if (n < 98)
	{
		for (current = n; current < 98; current++)
		{
			printf("%d", current);
		}
	}
	else if (n > 98)
	{
		for (current = n; current > 98; current--)
		{
			printf("%d", current);
		}
	}
	printf("98");
}

