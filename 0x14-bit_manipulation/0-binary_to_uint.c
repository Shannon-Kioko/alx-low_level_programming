#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if error
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int len, power = 0;

	if (!b)
		return (0);

	for (len = strlen(b) - 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		result += (b[len] - '0') * pow(2, power);
		power++;
	}

	return (result);
}
