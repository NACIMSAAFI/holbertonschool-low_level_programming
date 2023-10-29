#include "main.h"
/**
 *_memcpy - Function that copies that copies memory area.
 *Return: A pointer to the destination string.
 *@src: Source string
 *@dest: Destination string.
 *@n: bytes numbet from src
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

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

