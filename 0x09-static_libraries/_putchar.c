#include "main.h"

/**
 * _putchar - write character c to stdout
 *
 * @c: The char to print
 *
 * Return: On success 1.
 * Error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
