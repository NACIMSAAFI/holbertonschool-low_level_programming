#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a doubly linked list.
 * @head: A pointer to the head of the linked list.
 * @index: The index of the node to retrieve.
 *
 * Return: Pointer to the nth node, or NULL if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i;
dlistint_t *nthNode = head;

for (i = 0; i < index && nthNode != NULL; i++)
{
nthNode = nthNode->next;
}

return (nthNode);
}
