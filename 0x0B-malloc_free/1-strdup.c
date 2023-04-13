#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a duplicate of  a string using malloc.
 *
 * @str: the input string to be duplicated.
 *
 * Return: a pointer to the duplicated string or NULL if str is NULL or
 * if the mem allocation fails.
 */

char *_strdup(char *str)
{
	char *new_string;
	char *start;
	int length = 0, i = 0;

	if (str == NULL)
		return (NULL);

	start = str;

	while (*str != '\0')
	{
		length++;
		str++;
	}

	str = start;
	new_string = malloc(sizeof(char) * (length + 1));
	start = new_string;

	if (new_string != NULL)
	{
		for (; i < length; i++)
		{
			new_string[i] = *str;
			str++;
		}
		new_string[length] = '\0';
		return (start);
	}
	else
		return (NULL);
}
