#include "main.h"
/**
 * int _islower(int c) -Function that checks for lowercase character
 * @c: int
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
