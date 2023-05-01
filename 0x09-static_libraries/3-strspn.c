#include "main.h"

/**
 * _strspn - function returns numof bytes in
 * initial segment of string `s`
 *
 * @s: input string
 * @accept: input character(s)
 *
 * Return: number of bytes in the segment
 */

unsigned int _strspn(char *s, char *accept)
{
	int n = 0, i;
	char *a = accept;

	while (*s)
	{
		i = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				n++;
				i = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = a;
		if (i == 0)
			break;
	}

	return (n);
}
