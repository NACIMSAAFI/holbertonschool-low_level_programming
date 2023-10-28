#include "main.h"
/**
 **leet - Function  that encodes a string into 1337.
 *Return: str.
 *@str: String to change
 */
char *leet(char *str)
{
	char old[100] = "aAeEoOtTlL";
	char new[100] = "4433007711";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; old[j] != '\0'; j++)
		{
			if (str[i] == old[j])
			{
				str[i] = new[j];
			}
		}
	}
	return (str);
}
