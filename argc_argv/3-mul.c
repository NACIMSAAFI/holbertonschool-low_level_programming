#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that prints multiplies two numbers.
 * @argc: int value
 * @argv: char value
 * Return: 0 or 1.
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	if (a != 0 && b != 0)
	{
		printf("%d\n", a * b);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
