#include "main.h"

/**
 *print_rev - Function that prints a string, in reverse,
 *followed by a new line.
 * @s: A string to be printed.
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
