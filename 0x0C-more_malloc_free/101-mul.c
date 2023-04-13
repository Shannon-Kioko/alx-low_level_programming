#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two positive numbers
 *
 * @argc: num of args passed to program
 * @argv: array of pointers to the strings passed.
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
	int no1, no2, prod;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		no1 = atoi(argv[1]);
		no2 = atoi(argv[2]);
		prod = n1 * n2;
		printf("%d\n", prod);
		return (0);
	}
}
