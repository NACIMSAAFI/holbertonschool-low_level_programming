#include "main.h"
/**
 *_islower - Function that checks for lowercase character
 *@c: int value
 *Return: 1 or 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122 && c++)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
