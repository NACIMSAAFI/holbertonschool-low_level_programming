#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: number of array elements.
 * @size: size of each array element in bytes.
 * Return: pointer to the allocated memory, NULL if nmemb or size is 0
 * and NULL if malloc fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb * size; i++)
	{
		array[i] = 0;
	}

	return (array);
}
