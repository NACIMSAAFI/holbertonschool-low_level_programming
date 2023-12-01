#include "lists.h"
/**
 * sum_dlistint - Calculates the sum of all elements in a doubly linked list.
 * @head: Pointer to the head of the linked list.
 *
 * Return: Sum of all elements.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
