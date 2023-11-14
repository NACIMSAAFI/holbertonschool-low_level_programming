#include "function_pointers.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * array_iterator - function that executes a function given as a parameter
 * on each element of an array.
 * @array: array with elements.
 * @size: size of the array.
 * @action: function given as a parameter.
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != 0)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
