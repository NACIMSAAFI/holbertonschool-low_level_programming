#include "main.h"
/**
 *print_most_numbers - Function that cmultiplies two integers.
 */
void print_most_numbers(void)
{
	char ch = '0';

	for (ch = '0'; ch <= '9'; ch++)
		if (ch != '2' && ch != '4')
		{
			_putchar(ch);
		}
	_putchar('\n');
}
