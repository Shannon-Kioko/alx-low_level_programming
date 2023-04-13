#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns ptr to a 2-D array of integers
 *
 * @width: no. of columns
 * @height: no. of rows
 *
 * Return: pointer to 2D array of integers, NULL on failure
 */
int **alloc_grid(int width, int height)
{
    int **array, i = 0, j = 0;

    if (width <= 0 || height <= 0)
        return (NULL);

    array = malloc(sizeof(int *) * height);
    if (array == NULL)
        return (NULL);

    for (i = 0; i < height; i++)
    {
        array[i] = malloc(sizeof(int) * width);
        if (array[i] == NULL)
        {
            for (j = 0; j < i; j++)
            {
                free(array[j]);
            }
            free(array);
            return (NULL);
        }
        for (j = 0; j < width; j++)
        {
            array[i][j] = 0;
        }
    }

    return (array);
}
