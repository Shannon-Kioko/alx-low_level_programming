#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function on each element of an array.
 * @array: Input array
 * @size: len of array
 * @action: pointer to function provided
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int counter = 0;

	if (array == NULL || action == NULL)
		return;

	for (; counter < size; counter++)
		action(array[counter]);
}
