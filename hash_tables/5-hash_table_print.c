#include "hash_tables.h"
/**
 * hash_table_print - Prints the contents of a hash table.
 *
 * @ht: The hash table to print.
 *
 * Description:
 *This function iterates through each index in the hash table's array,
 *printing the key-value pairs stored in the linked lists at those indices.
 *The output is formatted as a JSON-style dictionary enclosed in curly braces.
 *If the hash table is NULL, the function does nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i, printed = 0;
	hash_node_t *current_node;

	if (ht == NULL)
	{
		return;
	}

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		current_node = ht->array[i];

		while (current_node != NULL)
		{
			if (printed > 0)
			{
				printf(", ");
			}

			printf("'%s': '%s'", current_node->key, current_node->value);
			current_node = current_node->next;
			printed++;
		}
	}

	printf("}\n");
}
