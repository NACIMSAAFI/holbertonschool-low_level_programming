#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: nbr of array's elements.
 * @size: nbr of array's bytes.
 * Return: pointer to the allocated memory, NULL If nmemb or size is 0
 *and NULL If malloc fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	{
		int *array;

		array = malloc(nmemb);
		if (array == NULL)
		{
			return (NULL);
		}
		array = malloc(size);
		if (array == NULL)
		{
			return (NULL);
		}
		return (array);
	}
}
