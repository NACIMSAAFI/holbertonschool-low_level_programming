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
	unsigned int i ;
	while (src[i] != '\0')
	{
		*(dest+i)=*(src+i);
		i++;
	}
	return (dest);
}
