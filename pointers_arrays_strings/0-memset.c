#include "main.h"
/**
 **_memset- Function that fills memory with a constant byte.
 *Return: A pointer to the destination string.
 *@s: A pointer to the memory area where to fill with the constant byte
 *@b: The constant byte.
 *@n: The number of bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	
		s[i] = b;

	return (s);
}
