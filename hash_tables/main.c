#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	hash_table_print(ht);
	hash_table_set(ht, "Iceland", "fun");
	hash_table_set(ht, "Bahrain", "awesome");
	hash_table_set(ht, "Russia", "and Kris love asm");
	hash_table_set(ht, "Japan", "queens");
	hash_table_set(ht, "Australia", "Obelix");
	hash_table_set(ht, "Canada", "Cool");
	hash_table_set(ht, "Spain", "Battery Street");
	hash_table_set(ht, "UK", "WORLD!");

	hash_table_print(ht);

	return (EXIT_SUCCESS);
}

