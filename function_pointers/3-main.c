#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 * @argc: The number of command line arguments.
 * @argv: An array of strings representing the command line arguments.
 *
 * Return: The result of the arithmetic operation, or an error code.
 */

int main(int argc, char *argv[])
{
	int operation_result, num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	if (strcmp(argv[2], "+") != 0 && strcmp(argv[2], "-") != 0
	&& strcmp(argv[2], "*") != 0 && strcmp(argv[2], "/") != 0
	&& strcmp(argv[2], "%") != 0)
	{
		printf("Error\n");
		return (99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((strcmp(argv[2], "/") == 0 && num2 == 0)
	|| (strcmp(argv[2], "%") == 0 && num2 == 0))
	{
		printf("Error\n");
		return (100);
	}

	operation_result = get_op_func(argv[2])(num1, num2);
	printf("%d\n", operation_result);

	return (0);
}
