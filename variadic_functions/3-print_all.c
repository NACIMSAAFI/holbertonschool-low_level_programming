#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - Function to print a character.
 * @args: va_list containing the argument.
 */
void print_char(va_list *args)
{
printf("%c", va_arg(*args, int));
}
/**
 * print_int - Function to print an integer.
 * @args: va_list containing the argument.
 */
void print_int(va_list *args)
{
printf("%d", va_arg(*args, int));
}
/**
 * print_float - Function to print a floating-point number.
 * @args: va_list containing the argument.
 */
void print_float(va_list *args)
{
printf("%f", va_arg(*args, double));
}
/**
 * print_string - Function to print a string.
 * @args: va_list containing the argument.
 */
void print_string(va_list *args)
{
char *spec = va_arg(*args, char *);
if (spec == NULL)
{
printf("(nil)");
return;
}
printf("%s", spec);
}
/**
 * print_all - function that prints anything, followed by a new line.
 * @format: the list of types of arguments passed to the function.
 * @...: variable number of arguments to be printed.
 */
void print_all(const char *const format, ...)
{
int i = 0, j;
fmt f[] = {
{'c', print_char},
{'i', print_int},
{'f', print_float},
{'s', print_string},
{'\0', NULL}};
const char *separator = "";
va_list args;
va_start(args, format);
if (format == NULL)
{
return;
}
while (format[i] != '\0')
{
j = 0;
while (f[j].spec)
{
if (f[j].spec == format[i])
{
printf("%s", separator);
f[j].print(&args);
separator = ", ";
break;
}
j++;
}
i++;
}
printf("\n");
va_end(args);
}
