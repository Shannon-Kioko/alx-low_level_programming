#include "main.h"

/**
 * _strncat - concatenates two strings, with n as limit
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes from src
 *
 * Return: pointer to resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *tmp = dest, *st = src;
	int len = 0, i = 0;

	while (*dest)
		dest++;

	while (*src)
	{
		src++;
		len++;
	}

	if (n > len)
		n = len;

	src = st;

	for (; i < n; i++)
		*dest++ = *src++;

	*dest = '\0';

	return (tmp);
}
