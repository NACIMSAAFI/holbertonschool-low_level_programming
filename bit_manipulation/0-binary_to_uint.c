#include "main.h"
/**
 * binary_to_uint - Converts a binary
 * string to an unsigned integer.
 * @b: Binary string (consists of '0' and '1' characters).
 *
 * Return: The converted unsigned integer,
 * or 0 if the conversion fails.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int base = 1;
	int i, len;

	if (b == NULL)
		return (0);

	len = strlen(b);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
			result += base;

		base *= 2;
	}

	return (result);
}
