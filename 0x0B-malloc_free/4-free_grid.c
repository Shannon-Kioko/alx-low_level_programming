#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2D array created by alloc_grid() function.
 *
 * @grid:   Ptr to 2D array.
 * @height: Height of grid.
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
    int i = 0;

    if (grid == NULL)
        return;

    while (i < height)
        free((int *)grid[i++]);

    free(grid);
}
