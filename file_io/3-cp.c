#include "main.h"

/**
 * Print an error message and exit the program with a specified exit code.
 * @param exit_code The exit code to be used in the exit call.
 * @param message The error message format string.
 * @param filename The filename to include in the error message.
 */
void print_error_and_exit(int exit_code, const char *message, const char *filename)
{
	dprintf(STDERR_FILENO, "Error: ");
	dprintf(STDERR_FILENO, message, filename);
	dprintf(STDERR_FILENO, "\n");
	exit(exit_code);
}
/**
 * The main function of the program. Copies the contents from one file to another.
 * Exits with an error if the number of command-line arguments is not as expected.
 * @param argc The number of command-line arguments.
 * @param argv An array of strings representing the command-line arguments.
 * @return 0 on successful execution.
 */
int main(int argc, char *argv[])
{
	char buffer[1024];
	ssize_t bytes_read, bytes_written;
	int file_from, file_to;

	if (argc != 3)
	{
		print_error_and_exit(97, "Usage: cp file_from file_to");
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		print_error_and_exit(98, "Can't read from file %s", argv[1]);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		close(file_from);
		print_error_and_exit(99, "Can't write to %s", argv[2]);
	}

	while ((bytes_read = read(file_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			close(file_from);
			close(file_to);
			print_error_and_exit(99, "Can't write to %s", argv[2]);
		}
	}

	if (bytes_read == -1)
	{
		close(file_from);
		close(file_to);
		print_error_and_exit(98, "Can't read from file %s", argv[1]);
	}

	close(file_from);
	close(file_to);

	return (0);
}
