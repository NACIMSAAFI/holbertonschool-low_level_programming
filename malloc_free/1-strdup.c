#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * _strdup - function that returns a pointer
 * to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * and initializes it with a specific char.
 * @str: a string given as a parameter.
 * Return: A pointer to a new string
 * which is a duplicate of the string str,
 * or NULL if insufficient memory was available.
 */
char *_strdup(char *str)
{
	int len;
	int j;
	char *newstr;

	if(str==NULL)
		return(NULL);
	
	len=strlen(str);
	newstr = malloc(len * sizeof(char)+1);
	if (newstr == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
	{
		newstr[j] = str[j];
	}
	return (newstr);
}
