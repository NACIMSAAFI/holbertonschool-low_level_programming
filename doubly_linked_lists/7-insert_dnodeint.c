#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node
 * @h: Pointer to the pointer to the head.
 * @idx: Index at which the new node should be inserted.
 * @n: Integer value to be stored in the new node.
 * Return: Pointer to the new node, or NULL on failure.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int size = 0;
	dlistint_t *newNode = NULL;
	dlistint_t *temp = *h;
	dlistint_t *temp2 = NULL;

	while (temp != NULL)
	{
		size++;
		temp = temp->next;
	}
	if (idx > size)
	{
		return (NULL);
	}
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	if (idx == size)
	{
		return (add_dnodeint_end(h, n));
	}
	temp = *h;
	while (idx > 1)
	{
		temp = temp->next;
		idx--;
	}
	temp2 = temp->next;
	temp->next = newNode;
	newNode->prev = temp;
	newNode->next = temp2;
	temp2->prev = newNode;
	return (newNode);
}
