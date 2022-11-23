#include "hash_tables.h"

/**
 * key_index - Returns the index of a key 'key'
 * in a hash table that: contains 'size' elements
 * and uses the hash_dkb2 algorithm to allocate
 * new members.
 *
 * @key: key of item in has table
 * @size: size of hash table
 *
 * Return: read text above
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

