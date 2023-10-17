#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -Entry point
 *
 * Return:0
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -Entry point
 *
 * Return:0
 */
int main(void)
{
int ch;

for (ch = 0; ch <= 9; ch++)
{
putchar(ch + '0');
if (ch < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
