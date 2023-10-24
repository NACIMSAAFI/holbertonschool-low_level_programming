#include "main.h"
#include <string.h>

/**
 *print_rev - Function that prints a string, in reverse,
 *followed by a new line.
 * @s: A string to be printed.
 */

void print_rev(char *s)
{
	int i, j;
	while (s[i] != '\0')
	{
		i++;
	}
	j = i;

	for (i =j - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
