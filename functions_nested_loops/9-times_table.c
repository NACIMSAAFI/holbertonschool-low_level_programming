#include "main.h"
/**
 *times_table - Function that prints every minute of the day
 *@i @j @n: int value
 */
void times_table(void)
{
int n, i, j;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
n = i * j;
if (j != 9)
{
if (n >= 10)
{
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
_putchar(',');
_putchar(' ');
}
else
{
_putchar(n + '0');
_putchar(',');
_putchar(' ');
_putchar(' ');
}
}
else
{
if (n >= 10)
{
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
}
else
{
_putchar(n + '0');
}
_putchar('\n');
}
}
}
}
