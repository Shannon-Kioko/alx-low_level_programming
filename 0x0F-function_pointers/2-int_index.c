#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an int.
 * @array: input array.
 * @size: size of array.
 * @cmp: pointer to function
 *
 * Return: index of the first matching element, or -1 if not found.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int counter = 0;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (; counter < size; counter++)
	{
		if (cmp(array[counter]))
			return (counter);
	}

	if (counter == size)
		return (-1);

	return (-1);
}
