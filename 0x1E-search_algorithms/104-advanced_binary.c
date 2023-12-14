#include "search_algos.h"

/**
 * rec_search - searches for a value in an array of
 * integers, Binary search algorithm
 *
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int rec_search(int *array, size_t size, int value)
{
	size_t halfway = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (halfway && size % 2 == 0)
		halfway--;

	if (value == array[halfway])
	{
		if (halfway > 0)
			return (rec_search(array, halfway + 1, value));
		return ((int)halfway);
	}

	if (value < array[halfway])
		return (rec_search(array, halfway + 1, value));

	halfway++;
	return (rec_search(array + halfway, size - halfway, value) + halfway);
}

/**
 * advanced_binary - calls to rec_search to return
 * the index of the number
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int advanced_binary(int *array, size_t size, int value)
{
	int index;

	index = rec_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
