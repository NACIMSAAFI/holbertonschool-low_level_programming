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
		return (1);
	}
	if (c >= 'A' && c <= 'Z')
	{
		return (0);
	}
	return (0);
}
