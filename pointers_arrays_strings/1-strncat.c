#include "main.h"
/**
 *_strncat - Function that concatenates two strings.
 *Return: A pointer to the destination string.
 *@src: Source string
 *@dest: Destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (j = 0; dest[j] != '\0'; j++)
	{
	}
	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[j] = src[i];
		j++;
	}
	dest[j] = '\0';

	return (dest);
}

