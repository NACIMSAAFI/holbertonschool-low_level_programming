#include "main.h"

/**
 *_strchr - Function that locates a character in a string.
 *Return: Value Comparisone
 *@s: char value
 *@c: character to located
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return ("");
}
