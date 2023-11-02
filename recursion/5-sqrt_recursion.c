#include "main.h"

/**
 *_sqrt - Helper function to recursively find the square root of a number.
 * the value of x raised to the power of y.
 *@n: int value.
 *@x: Current guess for the square root.
 *Return: The natural square root of n.
 */

int _sqrt(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	else if (x * x > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt(n, x + 1));
	}
}

/**
 *_sqrt_recursion - Function that returns
 *the natural square root of a number.
 *@n: int value.
 *Return: The natural square root of
 *n, or -1 if n does not have a natural square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (_sqrt(n, 1));
	}
}
