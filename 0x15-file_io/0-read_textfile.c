#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: the name of file to be read
 * @letters: the numof letters should read and print
 *
 * Return: the actual numof letters it could read and print, else 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t len_read, len_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	len_read = read(fd, buffer, letters);
	if (len_read == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	len_written = write(STDOUT_FILENO, buffer, len_read);
	if (len_written == -1 || len_written != len_read)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	close(fd);
	free(buffer);

	return (len_written);
}
