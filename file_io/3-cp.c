#include "main.h"
/**
 * main - Entry point for the cp program,
 * copies the content of a file to another file.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: 0 on success, or an exit code indicating an error.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t bytes_read, bytes_written;
	char buffer[10000];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp %s %s\n", argv[1], argv[2]);
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		return (-1);
	}
	bytes_read = read(file_from, buffer, 10000);
	if (bytes_read == -1)
	{
		dprintf(2, "Error: Can't read from file%s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC);
	if (file_to == -1)
	{
		return (-1);
	}
	bytes_written = write(file_to, buffer, 10000);
	if (bytes_written == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if (close(file_from) == -1 || close(file_to) == -1)
	{
		dprintf(2, "Error: Can't close %s or %s\n", argv[1], argv[2]);
		exit(100);
	}
	return (0);
}
