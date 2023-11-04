#include <stdio.h>
/**
 * main - function that print the number of arguments passed into it.
 * @argc: int value
 * @argv: char value
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
