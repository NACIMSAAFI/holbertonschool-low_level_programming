#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - Frees the memory allocated for a linked list.
 * @head: A pointer to the head of the linked list.
 * Parameters:
 *   head: A pointer to the head of the linked list.
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
