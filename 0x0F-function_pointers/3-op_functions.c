#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - Adds two int.
 *
 * @a: input integer
 * @b: input integer
 *
 * Return: Result of the sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub -  Subtracts two integers
 *
 * @a: input integer
 * @b: input integer
 *
 * Return: Result of the diff
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two integers
 *
 * @a: input integer
 * @b: input integer
 *
 * Return: Result of the product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function divides two integers
 *
 * @a: input integer
 * @b: input integer
 *
 * Return: Result of the quotient
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function finds remainder of the two
 * integers
 *
 * @a: input integer
 * @b: input integer
 *
 * Return: Result of the modulus
 */

int op_mod(int a, int b)
{
	return (a % b);
}
