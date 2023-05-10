#include "main.h"

#define BUFFER_SIZE 1024

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, or exit with error codes
 */

int main(int argc, char **argv)
{
	int fd_frm, fd_to, close_frm, close_to, len;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd_frm = open(argv[1], O_RDONLY);
	if (fd_frm == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);

	fd_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	len = read(fd_frm, buffer, BUFFER_SIZE);
	while (len > 0)
	{
		if (write(fd_to, buffer, len) != len)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		len = read(fd_frm, buffer, BUFFER_SIZE);
	}

	if (len == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);

	close_frm = close(fd_frm);
	if (close_frm == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_frm), exit(100);

	close_to = close(fd_to);
	if (close_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);

	return (0);
}
