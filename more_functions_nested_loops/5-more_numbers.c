#include "main.h"
/**
 *more_numbers -Fonction that preints *10 from 0 to 14, followed by a new line.
 */
void more_numbers(void)
{
	int c, i;

	for (i = 0; i < 10; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
			{
				_putchar((c / 10) + '0');
			}
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
}
