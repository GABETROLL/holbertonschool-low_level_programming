#include "hash_tables.h"

/**
 * hash_table_set - Adds key 'key' paired with value 'value'
 * in hash table '*ht'.
 *
 * In case of collision, adds the new node at the
 * beggining of the list at the index in
 * the hash table.
 *
 * @ht: pointer to hash table to add key-value pair to
 * @key: can't be an empty string
 * @value: will be duplicated into the hash table.
 * It can be an empty string.
 *
 * Return: 1 if succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	int index;

	/* can't have an empty key */
	if (key == NULL || *key == '\0')
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	/* copy const values into new_node */
	new_node->key = *(unsigned char **) &key;
	new_node->value = strcpy(value);
	new_node->next = ht->array[index];

	ht->array[index] = new_node;

	return (1);
}

