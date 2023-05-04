#include "main.h"

/**
 * flip_bits - Returns the number of bits that differ between two numbers
 * @n: The first number
 * @m: The second number
 *
 * Return: The number of bits that differ between the two numbers
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped = n ^ m;
	unsigned int count = 0;

	while (flipped != 0)
	{
		count += flipped & 1;
		flipped >>= 1;
	}

	return (count);
}
