#include "main.h"
/**
 * print_error - the program with a specified exit code.
 * @exit_code: The exit code to be used in the exit call.
 * @message: The error message format string.
 * @filename: The filename to include in the error message.
 */
void print_error(int exit_code, const char *message, const char *filename)
{
	dprintf(STDERR_FILENO, message, filename);
	dprintf(STDERR_FILENO, "\n");
	exit(exit_code);
}

/**
 * main - function of the program copies the contents from one file to another.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings representing the command-line arguments.
 * Return: 0 on successful execution.
 */
int main(int argc, char *argv[])
{
	char buffer[1024];
	ssize_t bytes_read, bytes_written;
	int file_from, file_to;

	if (argc != 3)
	{
		print_error(97, "Usage: cp file_from file_to", "");
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		print_error(98, "Error: Can't read from file %s", argv[1]);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		close(file_from);
		print_error(99, "Error: Can't write to %s", argv[2]);
	}
	while ((bytes_read = read(file_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			close(file_from);
			close(file_to);
			print_error(99, "Error: Can't write to %s", argv[2]);
		}
	}
	if (bytes_read == -1)
	{
		close(file_from);
		close(file_to);
		print_error(98, "Error: Can't read from file %s", argv[1]);
	}
	if (close(file_from) == -1 || close(file_to) == -1)
	{
		print_error(100, "Error: Can't close fd %d ", argv[2]);
	}
	return (0);
}
