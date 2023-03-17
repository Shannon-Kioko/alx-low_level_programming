#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int s;

	for (s = 'z'; s >= 'a'; s--)
		putchar(s);

	putchar('\n');

	return (0);
}
