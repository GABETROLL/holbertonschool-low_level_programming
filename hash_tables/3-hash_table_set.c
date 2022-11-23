#include "hash_tables.h"
#include <string.h>
#include <stdio.h>

/**
 * key_insert_pointer - Returns pointer to pointer
 * to node in hash table linked list if the
 * node has the same key as 'key'.
 *
 * If the node isn't present, return pointer to
 * pointer to the head of linked list
 * '*linked_list'.
 *
 * @key: key to find in hash table linked list
 * @linked_list: hash table linked list
 *
 * Return: pointer to pointer to node if found, NULL otherwise
 */
hash_node_t *key_insert_pointer(char *key, hash_node_t *linked_list)
{
	hash_node_t **current = &linked_list;

	while (*current)
	{
		if ((**current).key == key)
			return (current);
	}

	return (&linked_list);
}

/**
 * hash_table_set - Adds key 'key' paired with value 'value'
 * in hash table '*ht'.
 *
 * In case of collision, adds the new node at the
 * beggining of the list at the index in
 * the hash table.
 *
 * If the exact key is already present in the table,
 * replace its value with the new 'value' parameter.
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
	hash_node_t *node_with_same_key;

	/* can't have an empty key */
	if (key == NULL || *key == '\0')
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	/* Try to copy const values into new_node */
	new_node->key = malloc(sizeof(char) * strlen((char *)key));

	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	strcpy(new_node->key, (char *)key);

	new_node->value = malloc(sizeof(char) * strlen((char *)value));

	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	strcpy(new_node->value, (char *)value);

	/*
	 * insert new node in either the beggining of the list
	 * if no other nodes with the same key were found,
	 * otherwise at that memory location.
	 */
	*(key_insert_pointer(ht->array[index]) = new_node;

	return (1);
}

