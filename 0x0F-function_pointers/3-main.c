#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Performs arithmetic operations.
 *
 * @argc: num of arguments.
 * @argv: pointer to an array of arguments.
 *
 * Return: 0 on success, 98 on failure, 99 on invalid operator, 100 on div/ mod by 0
 */

int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		int a, b;
		int (*func)(int, int);

		a = atoi(argv[1]);
		b = atoi(argv[3]);
		func = get_op_func(argv[2]);
		if ((*argv[2] == '%' || *argv[2] == '/') && b == 0)
		{
			printf("Error\n");
			exit(100);
		}
		printf("%d\n", func(a, b));
		return (0);
	}
	printf("Error\n");
	exit(98);
}
