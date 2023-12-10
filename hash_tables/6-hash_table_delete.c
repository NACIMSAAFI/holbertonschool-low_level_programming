#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table and frees the allocated memory.
 *
 * @ht: The hash table to delete.
 *
 * Description:
 *   This function frees the memory allocated for the keys, values, nodes, and
 *   the hash table itself. It iterates through each index in the hash table's
 *   array, freeing the key, value, and node structures in the linked lists.
 *   Finally, it frees the array and the hash table structure itself.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current_node, *temp_node;
	unsigned int i;

	if (ht == NULL)
	{
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		current_node = ht->array[i];

		while (current_node != NULL)
		{
			temp_node = current_node->next;
			free(current_node->key);
			free(current_node->value);
			free(current_node);
			current_node = temp_node;
		}
	}

	free(ht->array);
	free(ht);
}
