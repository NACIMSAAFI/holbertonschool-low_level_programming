#include "hash_tables.h"
/**
 * key_index - Calculates the index for a given key in a hash table.
 *
 * @key: The key (string) for which the index is to be calculated.
 * @size: The size of the hash table.
 *
 * Return: The index in the hash table where
 * the key-value pair should be stored.
 *         This index is calculated using the djb2 hashing algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value, index;

	hash_value = hash_djb2(key);

	index = hash_value % size;

	return (index);
}
