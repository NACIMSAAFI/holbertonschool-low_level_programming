#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: dimension 1 of the array
 * Return: NULL on failure,
 * or pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	int *array;

	array = (int *)malloc(b * sizeof(int *));
	if (array == NULL)
	{
		exit(98);

	}

	return (array);
}
