#include <stdio.h>
#include "main.h"

/**
 * puts_half - Function that prints half of a string, followed by a new line.
 * @str: A string to be printed.
 */
void puts_half(char *str)
{
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
		/* Calculate the length of the string */
	}

	j = i / 2;

	for (; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
