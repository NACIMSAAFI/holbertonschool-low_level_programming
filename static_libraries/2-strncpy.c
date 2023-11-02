#include "main.h"
/**
 *_strncpy - Function that copies a string.
 *Return: A pointer to the destination string.
 *@src: Source string
 *@dest: Destination string.
 *@n: bytes numbet from src
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}

