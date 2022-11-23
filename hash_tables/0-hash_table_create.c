#include "hash_tables.h"

/**
 * hash_table_create - Tries to create new hash table
 * of size 'size'.
 *
 * If it succeeds, it returns the new hash table.
 * If it fails, it returns NULL.
 *
 * @size: size of hash table
 * Return: hash table of size 'size' if successful,
 * NULL otherwise
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *result = malloc(sizeof(hash_table_t));

	if (result == NULL)
		return (NULL);

	result->size = size;
	result->array = calloc(size, sizeof(hash_node_t *));
	if (result->array == NULL)
		return (NULL);

	return (result);
}

