#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	unsigned char *s = (unsigned char *)("Hello, World!");
	unsigned long int size = 1;

	printf("Hash: %lu\n", hash_djb2(s));

	for (; size <= 1024; size++)
	{
		printf("%lu\n", key_index(s, size));
	}

	return (EXIT_SUCCESS);
}

