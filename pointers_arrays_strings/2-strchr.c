#include "main.h"
#include <stddef.h>
/**
 * _strchr - Function that locates a character in a string.
 * Return: Pointer to the first occurrence of
 * the character in the string, or "nil" if not found.
 * @s: The string to search.
 * @c: The character to locate.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (*s == c)
		return (s);

	return (NULL);
}

