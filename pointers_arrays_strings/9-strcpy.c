#include "main.h"
#include <string.h>
/**
 **_strcpy - Function that copies a string from src to dest.
 *Return: A pointer to the destination string.
 *@src: Source string
 *@dest: Destination string.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
