#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Adds a new node with a copy of the provided string to the end
 * of a linked list.
 * @head: A pointer to the head of the linked list.
 * @str: The string to be duplicated and stored in the new node.
 *
 * Parameters:
 *   head: A pointer to the head of the linked list.
 *   str: The string to be duplicated and stored in the new node.
 *
 * Return: A pointer to the newly created node on success, or NULL on failure.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));
	list_t *lastNode = *head;

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}

		lastNode->next = newNode;
	}

	return (newNode);
}
