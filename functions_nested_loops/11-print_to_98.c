#include <stdio.h>
/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The number to start printing from
 * Return: Always 0.
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n >= 98)
		{
			if (n > 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d\n", n);
			}
			n--;
		}
	}
	else
	{
		while (n <= 98)
		{
			if (n < 98)
			{
				printf("%d, ", n);
			}
			else if (n == 98)
			{
				printf("%d\n", n);
			}
			n++;
		}
	}
}
