#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers.
 * @n: the number of integers passed to the function.
 * @...: variable number of integers to be printed.
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	if (n != 0)
	{
		unsigned int i, num;
		va_list args;

		va_start(args, n);

		for (i = 0; i < n; i++)
		{
			num = va_arg(args, int);
			printf("%d", num);

			if (separator != NULL )
			{
				printf("%s", separator);
			}
		}

		va_end(args);

		printf("\n");
	}
}
