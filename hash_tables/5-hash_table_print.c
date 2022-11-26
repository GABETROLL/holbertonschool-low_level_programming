#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Prints hash table with the format:
 * {key: value, other_key: other_value}
 * Just like Python!
 *
 * If 'ht' is NULL, it doens't print anything.
 *
 * @ht: hash table to print
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index_count;

	if (ht == NULL)
		return;

	putchar('{');

	for (index_count = 0; index_count < ht->size; index_count++)
	{
		hash_node_t *linked_list = ht->array[index_count];

		while (linked_list)
		{
			printf("'%s': '%s'", linked_list->key, linked_list->value);
			/* last item shouldn't have a comma after it. */
			if (linked_list->next)
				printf(", ");

			linked_list = linked_list->next;
		}
	}

	printf("}\n");
}

