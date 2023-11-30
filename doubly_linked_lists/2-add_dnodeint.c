#include "lists.h"

/**
 * add_dnodeint - Adds a new node to the beginning of a doubly linked list.
 * @head: Pointer to the pointer to the head of the list.
 * @n: Integer value to be stored in the new node.
 *
 * Return: Pointer to the newly added node, or NULL on failure.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;
	if (*head != NULL)
	{
		(*head)->prev = newNode;
	}
	*head = newNode;

	return (newNode);
}
