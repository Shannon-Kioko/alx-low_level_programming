#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 *
 * @nmemb: num of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory, or NULL on failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
        unsigned int i = 0;
        char *ptr;

        if (nmemb == 0 || size == 0)
                return (NULL);

        ptr = malloc(nmemb * size);
        if (ptr == NULL)
                return (NULL);

        for (; i < nmemb * size; i++)
                *(ptr + i) = 0;

        return (ptr);
}
