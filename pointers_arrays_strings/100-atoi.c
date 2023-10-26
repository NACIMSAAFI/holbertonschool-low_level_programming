#include "main.h"
#include <stdint.h>

/**
 * _atoi - Function that converts a string to an integer.
 * Return: The integer value extracted from the string.
 * @s: The input string.
 */
int _atoi(char *s)
{
	int i = 0;
	int result = 0;
	int sign = 1;
	int found_digit = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			break;
		}
		i++;
	}
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
			found_digit = 1;
		}
		else if (found_digit)
		{
			break;
		}
		i++;
	}

	return (sign * result);
}
