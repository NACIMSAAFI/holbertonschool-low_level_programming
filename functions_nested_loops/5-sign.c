#include "main.h"
/**
 *print_sign - Function that prints the sign of a number
 *@n: int value
 *Return: 1 or 0
 */
int print_sign(int n)
{
	if (n > 0 && n++)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
