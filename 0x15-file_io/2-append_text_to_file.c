#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written, content_len = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		while (text_content[content_len])
			content_len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
		bytes_written = write(fd, text_content, content_len);
	else
		bytes_written = 0;

	close(fd);

	if (bytes_written == -1)
		return (-1);

	return (1);
}
