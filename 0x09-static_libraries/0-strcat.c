#include "main.h"

/**
 * _strcat - function appends src string to dest string.
 *
 * @src: input string
 * @dest: input string
 *
 * Return: pointer concatenated string 
 */

char *_strcat(char *dest, char *src)
{
	char *tmp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';

	return (tmp);
}
