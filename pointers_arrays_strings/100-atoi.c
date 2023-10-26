#include "main.h"

/**
 * _atoi - Function that converts a string to an integer.
 * Return: The integer value extracted from the string.
 * @s: The input string.
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int found_digit = 0;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			break;
		}
		s++;

	}
	while (*s!= '\0')
	{
		if (*s >= '0' && *s <= '9')
		{
			result = result * 10 + (*s - '0');
			found_digit = 1;
		}
		else if (found_digit)
		{
			break;
		}
		s++;
	}

	return (sign * result);
}
