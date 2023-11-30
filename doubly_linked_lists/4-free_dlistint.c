#include "lists.h"

/**
 * free_dlistint - Frees the memory allocated for a doubly linked list.
 * @head: A pointer to the head of the linked list.
 * Parameters:
 *   head: A pointer to the head of the linked list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
