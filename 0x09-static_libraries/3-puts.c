#include "main.h"
/**
 * _puts - prints a string to stdout
 * @s: The string to be printed
 *
 * Return: void
 */

void _puts(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		_putchar(s[n]);
		n++;
	}
	_putchar('\n');
}
