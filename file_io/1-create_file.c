#include "main.h"

/**
 * create_file - Create or truncate a file
 * with specified permissions and optional content.
 *
 * @filename: The name of the file to be created or truncated.
 * @text_content: The content to be written
 * to the file (NULL for an empty file).
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}

	file = open(filename, O_RDWR | O_CREAT | O_TRUNC,S_IRUSR | S_IWUSR);
	if (file == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		bytes_written = write(file, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			close(file);
			return (-1);
		}
	}

	close(file);
	return (1);
}
