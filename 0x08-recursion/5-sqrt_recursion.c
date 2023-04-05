#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: input integer
 *
 * Return: natural square root of n, or -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt(1, n));
}

/**
 * _sqrt - helper function for _sqrt_recursion
 *
 * @prev: prev guess of the square root
 * @root: num to find the square root of
 *
 * Return: the natural square root of root
 */

int _sqrt(int prev, int root)
{
	if (prev > root)
		return (-1);
	else if (prev * prev == root)
		return (prev);
	else
		return (_sqrt(prev + 1, root));
}

