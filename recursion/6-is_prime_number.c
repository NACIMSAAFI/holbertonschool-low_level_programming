#include "main.h"

/**
 * _prim - Function that helps to find if a number is prime or not.
 * @n: int value.
 * @x: int value to use as a divisor.
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */
int _prim(int n, int x)
{
	if (x <= 1)
	{
		return (1);
	}
	if (n % x == 0)
	{
		return (0);
	}
	else
	{
		return (_prim(n, x - 1));
	}
}

/**
 * is_prime_number - Function that returns 1
 * if the input integer is a prime number, otherwise return 0.
 * @n: int value.
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (_prim(n, n - 1));
	}
}
