#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - Returns value in key 'key' in
 * hash table '*ht' if the key is present there,
 * NULL otherwise.
 *
 * @ht: hash table
 * @key: key
 * Return: read text above
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *linked_list_with_key;

	if (!ht)
		return (NULL);

	/* linked list node with key to have its value returned */
	linked_list_with_key = ht->array[key_index((unsigned char *)key, ht->size)];

	while (1)
	{
		/* the key could be a null pointer */
		int pointers_match;
		int key_matches;

		if (!linked_list_with_key)
			return (NULL);

		pointers_match = linked_list_with_key->key == key;
		if (pointers_match)
			return (linked_list_with_key->value);

		key_matches = !strcmp(linked_list_with_key->key, key);
		if (key_matches)
			return (linked_list_with_key->value);

		linked_list_with_key = linked_list_with_key->next;
	}
}

