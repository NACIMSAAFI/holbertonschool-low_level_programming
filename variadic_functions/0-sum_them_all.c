#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum
 * of all its parameters.
 * @n: const unsigned int parameter indicating the number of parameters.
 * Return: the sum of all function parameters or 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list add;
	unsigned int num = 0, i;

	if (n == 0)
	{
		return (0);
	}

	va_start(add, n);

	for (i = 0; i < n; i++)
	{
		num += va_arg(add, int);
	}
	va_end(add);
	return (num);
}
