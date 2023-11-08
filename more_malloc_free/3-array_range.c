#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min: value ordered from.
 * @max: value ordered to.
 * Return: the pointer to the newly created array,
 * NULL if min > max or malloc fails.
 */
int *array_range(int min, int max)
{
	int i, num_elements, *array;

	if (min > max)
	{
		return (NULL);
	}

	num_elements = max - min + 1;

	array = malloc(num_elements * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < num_elements; i++)
	{
		array[i] = min + i;
	}

	return (array);
}
