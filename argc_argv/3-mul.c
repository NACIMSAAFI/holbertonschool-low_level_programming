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
	int a, b, mul;

	(void)argc;
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		mul= a * b;
		printf("%d\n", mul);
	}
	printf("\n");

	return (0);
}
