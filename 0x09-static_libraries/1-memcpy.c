#include "main.h"

/**
 * _memcpy - function copies memory area
 *
 * @dest: destination string
 * @src: source string
 * @n: num of bytes
 *
 * Return: pointer to copied string according to memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *x = dest, *st = src;

	if ((*dest != '\0') && (*src != '\0'))
	{
		while (n)
		{
			*dest++ = *src++;
			--n;
		}
	}

	src = st;

	return (x);
}
