#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);


/**
 * struct formatter - Structure to represent a format specifier and its corresponding print function.
 * @spec: The format specifier character.
 * @print: Pointer to the print function for the specified type.
 */
typedef struct formatter
{
    char spec;
    void (*print)(va_list *);
} fmt;

void print_all(const char *const format, ...);
void print_char(va_list *args);
void print_int(va_list *args);
void print_float(va_list *args);
void print_string(va_list *args);

#endif 
