#include "main.h"

/**
 * _memcpy: function copies memory area
 *
 * @dest: input string
 * @src: input string
 * @n: number of bytes
 *
 * Return: copied string according to memory
 */

char *_memcpy(char *dest, char *src, unsigned int n) 
{
    unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
