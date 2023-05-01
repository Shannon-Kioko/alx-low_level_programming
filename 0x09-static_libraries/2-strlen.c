#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: The string to be measured
 *
 * Return: The length of s
 */

int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\0')
		n++;

	return (n);
}
