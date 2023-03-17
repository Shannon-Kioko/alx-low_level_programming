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

	for (s = 48; s <= 57; s++)
	    /* The digits 0 thru 9 are encoded as the consecutive numbers 48 thru 57. */
		/* putchar(48 + s); */
		putchar(s);

	putchar('\n');

	return (0);
}
