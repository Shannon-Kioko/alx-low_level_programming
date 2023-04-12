#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all args of program
 * @ac: args count
 * @av: args vector (argv) containing all arguments
 *
 * Return: pointer to new string, NULL otherwise
 */
char *argstostr(int ac, char **av)
{
	char *new_string;
	int str_length = 0, i = 0, j, p = 0;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			str_length++;
		str_length++;
	}

	str_length++;
	new_string = malloc(str_length * sizeof(char));
	if (new_string == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			new_string[p] = av[i][j];
			k++;
		}
		new_string[p] = '\n';
		k++;
	}
	new_string[p] = '\0';
	return (new_string);
}
