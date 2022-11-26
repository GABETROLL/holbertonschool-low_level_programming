#include "hash_tables.h"
#include <string.h>
#include <stdio.h>

/**
 * already_present_node - Returns pointer to node
 * in hash table linked list if the
 * node has the same key as 'key'.
 *
 * If the node isn't present, return NULL.
 *
 * @key: key to find in hash table linked list
 * @linked_list: hash table linked list
 *
 * Return: pointer to node if found, NULL otherwise
 */
hash_node_t *already_present_node(char *key, hash_node_t *linked_list)
{
	hash_node_t *current = linked_list;

	while (current)
	{
		int keys_are_equal = !strcmp(current->key, key);

		if (keys_are_equal)
			return (current);

		current = current->next;
	}

	return (NULL);
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
	hash_node_t *node;
	int index;

	if (!ht || !key || *key == '\0')
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	/*
	 * If the key was already present in the linked list,
	 * there's no need to create a new one or a new node.
	 */
	node = already_present_node((char *)key, ht->array[index]);
	if (!node)
	{
		node = malloc(sizeof(hash_node_t));
		if (!node)
			return (0);
		node->key = strdup((char *)key);
		if (!node->key)
		{
			free(node);
			return (0);
		}
		node->value = strdup((char *)value);
		if (!node->value)
		{
			free(node->key);
			free(node);
			return (0);
		}
		node->next = ht->array[index];
		ht->array[index] = node;
	}
	else
	{
		node->value = strcpy(node->value, (char *)value);
		if (!node->value)
			return (0);
	}
	return (1);
}

