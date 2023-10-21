#include "main.h"
/**
 *_isupper - Function that checks for uppercase character.
 *@c: int value
 * Return:0 or 1
 */
int _isupper(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
