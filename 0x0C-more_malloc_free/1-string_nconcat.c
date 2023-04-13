#include "main.h"
#include <stdlib.h>

/**
 * string_concat_n - function concats two strings
 *
 * @s1: input string
 * @s2: input string
 * @n: no. of strings to concat
 *
 * Return: ptr to concatenated strings, NULL otherwise
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new;
	unsigned int i = 0, p1 = 0, p2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[p1])
		p1++;
	while (s2[p2])
		p2++;
	if (n >= p2)
		n = p2;

	new = malloc(p1 + n + 1);
	if (new == NULL)
		return (NULL);

	for (; i < (p1 + n); i++)
	{
		if (i < p1)
			new[i] = *s1, s1++;
		else
			new[i] = *s2, s2++;
	}
	new[i] = '\0';
	return (new);
}
