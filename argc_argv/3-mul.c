#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that multiplies two numbers..
 * @argc: int value
 * @argv: char value
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int a, b;

	(void)argc;
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	}
	return (0);
}
