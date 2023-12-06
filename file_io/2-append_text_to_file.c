#include "main.h"
/**
 * append_text_to_file - Appends text to the end of a file.
 *
 * @filename: The name of the file.
 * @text_content: The content to be appended to the file.
 *
 * Return: 1 on success, -1 on failure.
 *
 * If @filename is NULL, the function returns -1.
 * If the file cannot be opened or created, the function returns -1.
 * If @text_content is NULL, the function returns 1.
 * If the write operation fails, the function returns -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
    int file;

    if (filename == NULL)
    return (-1);

    file = open(filename, O_WRONLY | O_APPEND);
    if (file == -1)
    {
    return (-1);
    }
    if (text_content == NULL)
    {
        return(1);
    }
  write(file, text_content, strlen(text_content));

    close (file);
    return(1);
}
