#include "main.h"
#include<stdio.h>

/**
 *print_rev - Function that prints a string, in reverse,
 *followed by a new line.
 * @s: A string to be printed.
 */
void print_rev(char *s)
{
	int i,j;

while (s[i] != '\0')
	{
		i++;
	}
j=i;
	while(j>=0)
    {
        _putchar(s[j]);
        j--;
    
    }
	_putchar('\n');
}
