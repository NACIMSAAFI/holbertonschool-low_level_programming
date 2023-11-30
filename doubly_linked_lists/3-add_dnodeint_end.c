#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node to the end of a doubly linked list.
 * @head: Pointer to the pointer to the head of the list.
 * @n: Integer value to be stored in the new node.
 *
 * Return: Pointer to the newly added node, or NULL on failure.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tp = *head;
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}

	while (tp->next != NULL)
	{
		tp = tp->next;
	}

	tp->next = newNode;
	newNode->prev = tp;

	return (newNode);
}
