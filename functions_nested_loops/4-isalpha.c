#include "main.h"
/**
 *_isalpha - Function that checks for lowercase character
 *@c: int value
 *Return: 1 or 0
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122 && c++)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
