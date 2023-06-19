#include "main.h"

/**
 * _memset: files memory with constant byte
 *
 * @s: input string
 * @b: input character
 * @n: number of bytes
 *
 * Return: strings with constant byte
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
