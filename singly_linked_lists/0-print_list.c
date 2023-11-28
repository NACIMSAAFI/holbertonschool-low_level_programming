#include "lists.h"
#include <string.h>

/**
 * print_list - Prints the elements of a linked list of strings.
 * @h: A pointer to the head of the linked list.
 *
 * This function traverses a linked list of strings and prints each string
 * along with its position in the list and its length. If a string is NULL,
 * it prints "(nil)".
 *
 * Parameters:
 *   h: A pointer to the head of the linked list.
 *
 * Return:
 *   The number of nodes in the linked list.
 */

size_t print_list(const list_t *h)
{

	int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			int len = strlen(h->str);

			printf("[%i] %s\n", len, h->str);
		}

		h = h->next;
		count++;
	}

	return (count);
}
