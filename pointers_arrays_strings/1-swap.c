#include "main.h"

/**
 *swap_int - Function that swaps the values of two integers.
 *@a: int value
 *@b: int value
 *Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
