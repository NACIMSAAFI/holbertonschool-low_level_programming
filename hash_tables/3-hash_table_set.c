#include "hash_tables.h"

/**
 * hash_table_set - Adds a key-value pair to a hash table.
 *
 * @ht: The hash table to which the key-value pair should be added.
 * @key: The key (string) associated with the value.
 * @value: The value (string) to be stored.
 *
 * Return: 0 or 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned int index;
    hash_node_t *new_node = NULL;
    hash_node_t *current_node = NULL;

    if (ht == NULL || key == NULL || value == NULL)
    {
        return (-1);
    }

    index = key_index((unsigned char *)key, ht->size);

    current_node = lookup_data_string_(ht, key);
    if (current_node != NULL)
    {
        free(current_node->value);
        current_node->value = strdup(value);
        if (current_node->value == NULL)
        {
            return (-1); 
        }
        return (1); 
    }

    
    new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
    {
        return (-1);  
    }

    new_node->key = strdup(key);
    new_node->value = strdup(value);

    if (new_node->key == NULL || new_node->value == NULL)
    {
        free(new_node->key);
        free(new_node->value);
        free(new_node);
        return (-1);  
    }

 
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return (0);  
}

/**
 * lookup_data_string_ - Looks up a key
 * in a hash table and returns the associated data (value).
 *
 * @ht: The hash table to search.
 * @key: The key to look up.
 *
 * Return:
 *   - pointer to the value associated with the key if found.
 *   - NULL if the key is not found.
 */
hash_node_t *lookup_data_string_(const hash_table_t *ht, const char *key)
{
	unsigned int index;
	hash_node_t *current_node;

	index = key_index((unsigned char *)key, ht->size);

	current_node = ht->array[index];
	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			return (current_node);
		}
		current_node = current_node->next;
	}

	return (NULL);
}
