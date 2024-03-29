#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a doubly linked list.
 * @h: A pointer to the head of the doubly linked list.
 *
 * This function traverses a doubly linked list and prints each element.
 *
 * Parameters:
 *   h: A pointer to the head of the doubly linked list.
 *
 * Return:
 *   The number of nodes in the doubly linked list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
