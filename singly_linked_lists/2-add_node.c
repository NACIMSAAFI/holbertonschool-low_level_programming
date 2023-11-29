#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - Function that adds a new node at the beginning of a list_t list.
 * @head: A pointer to a pointer to the head of the linked list.
 * @str: String to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));

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

	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
