#include "main.h"

/**
 *reverse_array - Function that everses the content of an array of integers.
 * @a: The array.
 * @n: is the number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int i;
	int swap;

	for (i = 0; i < n / 2; i++)
	{
		swap = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = swap;
	}
}
