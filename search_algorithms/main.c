#include <stdio.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int array[17] = {
		0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 25, 48, 89
	};

	printf("Found at index: %d\n", binary_search(array, 16, 12));
	printf("Found at index: %d\n", binary_search(array, 16, 0));
	printf("Found at index: %d\n", binary_search(array, 16, 48));
	printf("Found at index: %d\n", binary_search(array, 16, 89));

	array[12] = 13;
	printf("Found at index: %d\n", binary_search(array, 16, 12));
	printf("Found at index: %d\n", binary_search(array, 16, 999));
	printf("Found at index: %d\n", binary_search(array, 16, -57890));
	printf("Found at index: %d\n", binary_search(NULL, 0, 0));

	return (0);
}

