#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 *
 * @s1: the first string.
 * @s2: the second string.
 *
 * Return: a pointer to the concatenated string, or NULL if the memory
 * allocation fails.
 */

char *str_concat(char *s1, char *s2)
{
	char *new_string;
	int i, n = 0, length = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		length++;

	new_string = malloc(sizeof(char) * (length + 1));

	if (new_string == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		new_string[n++] = s1[i];

	for (i = 0; s2[i]; i++)
		new_string[n++] = s2[i];

	new_string[n] = '\0';

	return (new_string);
}
