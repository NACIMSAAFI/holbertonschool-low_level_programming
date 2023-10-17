#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Description: Print all possible combinations of single-digit numbers.
 * Numbers must be separated by commas and a space.
 * You can only use `putchar` to print to the console.
 * You can only use `putchar` up to four times.
 * You are not allowed to use any variable of type `char`.
 * Return: 0
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
