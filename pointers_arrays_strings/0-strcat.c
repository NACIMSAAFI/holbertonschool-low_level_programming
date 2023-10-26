#include "main.h"
/**
 **_strcpy - Function that concatenates two strings
 *Return: A pointer to the destination string.
 *@src: Source string
 *@dest: Destination string.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;
	for (j = 0; dest[j] != '\0'; j++)
	{
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j] = src[i];
		j++;
	}
	dest[j] = '\0';

	return (dest);
}

