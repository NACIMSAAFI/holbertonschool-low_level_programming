#include "main.h"
/**
 *_strncat - Function that concatenates two strings.
 *Return: A pointer to the destination string.
 *@src: Source string
 *@dest: Destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, dest_len;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
	{
	}
	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[dest_len + i] = src[i];
		n++;
	}
	dest[n] = '\0';

	return (dest);
}