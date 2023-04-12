#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters and initializes it with
 * a specific character.
 *
 * @size: size of the array to create.
 * @c: char to initialize array with.
 *
 * Return: pointer to created array, or NULL if size is 0 or if
 * the memory allocation fails.
 */

char *create_array(unsigned int size, char c)
{
	char *theArray;
	unsigned int i;

	if (size == 0)
		return (NULL);

	theArray = malloc(size * sizeof(char));
	if (theArray == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		theArray[i] = c;
		i++;
	}

	return (theArray);
}
