#include "main.h"

/**
 *_strlen - Function that swaps the values of two integers.
 *Return: Always 0.
 *@s: char value
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
