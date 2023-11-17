#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers.
 * @n: the number of integers passed to the function.
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	if (separator != NULL && n != 0)
	{
		va_list add;
		unsigned int num = 0, i;

		va_start(add, n);

		for (i = 0; i < n; i++)
		{
			num += va_arg(add, int);
			printf("%d%s", num, separator);
		}
		va_end(add);
	}
	printf("\n");
}
