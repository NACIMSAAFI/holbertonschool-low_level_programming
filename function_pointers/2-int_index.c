#include "function_pointers.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * array_iterator - function  that searches for an integer.
 * @array: array with elements.
 * @size: size of the array.
 * @cmp: pointer to the function to be used to compare values.
 * Return: the index of the first element.
 * for which the cmp function does not return 0.
 * -1 If no element matches.
 * -1 If size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array == 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
