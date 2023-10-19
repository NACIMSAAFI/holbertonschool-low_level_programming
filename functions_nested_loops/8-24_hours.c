#include "main.h"
/**
 *jack_bauer - Function that prints every minute of the day
 *@i @j @k @d: int value
 */
void jack_bauer(void)
{
	char i, j, k, d;

	for (i = '0'; i <= '2'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '5'; k++)
			{
				for (d = '0'; d <= '9'; d++)
				{
					if (i == '2' && j > '3')
						break;
					{
						_putchar(i);
						_putchar(j);
						_putchar(':');
						_putchar(k);
						_putchar(d);
						_putchar('\n');
					}
				}
			}
		}
	}
}
