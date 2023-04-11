#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program adds two values
 * @argc: argument counter
 * @argv: argument vector with values
 * Return: 0
 */

int main(int argc, char **argv)
{
	int no, sum = 0, i;

	while (argc-- > 1)
	{
		for (i = 0; argv[argc][i]; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		no = atoi(argv[argc]);
		sum += no;

	}
	printf("%d\n", sum);
	return (0);
}

