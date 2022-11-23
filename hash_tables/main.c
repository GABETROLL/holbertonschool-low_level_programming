#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht = hash_table_create(1024);

	printf("%s -> %d\n", "hi", hash_table_set(ht, "hi", "hello"));
	printf("%s -> %d\n", "dram", hash_table_set(ht, "dram", ""));
	printf("%s -> %d\n", "vivency", hash_table_set(ht, "vivency", "PLEASE"));

	hash_table_print(ht);

	return (EXIT_SUCCESS);
}

