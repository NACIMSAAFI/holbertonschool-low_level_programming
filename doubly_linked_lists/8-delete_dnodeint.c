#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node
 * at a given position in a doubly linked list.
 * @head: Pointer to the pointer to the head of the linked list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if successful, -1 on failure.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *prev = NULL;
	dlistint_t *current = *head;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	for (i = 0; i < index && current != NULL; i++)
	{
		prev = current;
		current = current->next;
	}

	if (current == NULL)
	{
		return (-1);
	}

	if (current->next != NULL)
		current->next->prev = prev;
	if (prev != NULL)
		prev->next = current->next;

	if (current == *head)
		*head = current->next;

	free(current);

	return (1);
}
