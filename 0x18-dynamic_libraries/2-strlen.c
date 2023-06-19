#include "main.h"

/**
 * _strlen - function returns length of a string
 *
 * @s: input string
 *
 * Return: len of a string
 */

int _strlen(char *s)
{
	int n = 0;

	/* for(n = 0; s[n] != '\0'; ++n); */
	while (s[n] != '\0')
		n++;

	return (n);
}
