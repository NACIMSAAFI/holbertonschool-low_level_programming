#include "lists.h"

/**
 * size_t dlistint_len - Function that returns the number
 * of elements in a linked dlistint_t list.
 * @h: A pointer to the head of the doubly linked list.
 *
 * Parameters:
 *   h: A pointer to the head of the doubly linked list.
 *
 * Return:
 *   The number of elements in the doubly linked list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
