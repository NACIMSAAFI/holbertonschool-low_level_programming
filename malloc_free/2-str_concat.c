#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: string 1 to concatenates.
 * @s2: string 2 to concatenates.
 * Return: pointer should point to a newly allocated
 * space in memory which contains the contents of s1,
 * followed by the contents of s2, and null terminated,
 * or NULL if insufficient memory was available.
 */


char *str_concat(char *s1, char *s2)
{
	char *concatstr;
	unsigned int len1, len2, i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);
	concatstr = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (concatstr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		concatstr[i] = s1[i];
	}

	for (j = 0; j < len2; j++)
	{
		concatstr[i + j] = s2[j];
	}

	concatstr[i + j] = '\0';

	return (concatstr);
}
