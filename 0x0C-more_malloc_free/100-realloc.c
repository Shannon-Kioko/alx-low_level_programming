#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates mem - malloc and free
 *
 * @ptr: ptr to mem attached before
 * @old_size: old mem size
 * @new_size: new memory size
 *
 * Return: Void ptr to new memory location
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *mloc, *newer_mloc;
	unsigned int n = 0;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	mloc = malloc(new_size);
	newer_mloc = ptr;
	if (old_size > new_size)
		old_size = new_size;
	for (; n < old_size; n++)
		mloc[n] = newer_mloc[n];
	free(ptr);
	return (mloc);
}
