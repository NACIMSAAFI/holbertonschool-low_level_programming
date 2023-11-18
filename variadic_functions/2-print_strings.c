#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: the string to be printed between numbers (can be NULL).
 * @n: the number of strings passed to the function.
 * @...: variable number of strings to be printed.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list vsprint;
va_start(vsprint, n);

for (i = 0; i < n ; i++)
{
char *string = va_arg(vsprint, char*);
if (string == NULL)
{
printf("(nil)");
}
else
{
printf("%s", string);
}

if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
va_end(vsprint);
printf("\n");
}
