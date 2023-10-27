#include "main.h"
/**
 **cap_string - Function that capitalizes
 *all words of a string.
 *Return: A pointer to the new string.
 *@str: String to change
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 97 && str[i] <= 122) && (str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' || str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' || str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' || str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' || str[i - 1] == '}'))

			str[i] = str[i] - 32;
	}
	return (str);
}
