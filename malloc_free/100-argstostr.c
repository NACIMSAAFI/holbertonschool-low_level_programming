#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - function that concatenates all the arguments of your program.
 * Each argument should be followed by a \n in the new string
 * @ac: argument count
 * @av: argument vector (array of strings)
 * Return: pointer should point to a new string or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *concatstr;
	int len = 0;
	int i, j, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]) + 1;
	}

	concatstr = (char *)malloc(len * sizeof(char));
	if (concatstr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concatstr[k++] = av[i][j];
		}
		concatstr[k++] = '\n';
	}

	concatstr[k] = '\0';

	return (concatstr);
}
