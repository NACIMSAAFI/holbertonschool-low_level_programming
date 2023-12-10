#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value associated with a key in a hash table.
 *
 * @ht: The hash table to search.
 * @key: The key to look up.
 *
 * Return:
 *   - Value associated with the key if found.
 *   - NULL if the key is not found or if the hash table is NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index = index;
	hash_node_t *current_node;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}

	index = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[index];

	while (current_node != NULL)
	{
		if (strcmp(key, current_node->key) == 0)
		{
			return (current_node->value);
		}
		current_node = current_node->next;
	}

	return (NULL);
}
