#include <stdio.h>
#include "main.h"

/**
 *puts_half - Function that prints half of a string, followed by a new line.
 *@str: A string to be printed.
 */
void puts_half(char *str)
{
	int i = 0;
	int j;

	while (str[i] != '\0')
	{

		i++;
	}
	if (i % 2 == 0)
	{
		j = i / 2;
		while (str[j] != '\0')
		{
			_putchar(str[j]);
			j++;
		}
	}
	else
	{
		j = i / 2 + 1;
		while (str[j] != '\0')
		{
			_putchar(str[j]);
			j++;
		}
	}
	_putchar('\n');
}
