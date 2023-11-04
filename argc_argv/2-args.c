#include <stdio.h>
/**
 * main - function that print all arguments it receives.
 * @argc: int value
 * @argv: char value
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int i, j;

	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			printf("%c", argv[i][j]);
		}
		printf("\n");
	}
	return (0);
}
