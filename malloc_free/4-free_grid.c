#include <stdlib.h>

/**
 * free_grid - Frees 2d matrix of ints.
 *
 * @grid: pointer pointing to an array of
 * pointers to int arrays
 *
 * @height: amount of int arrays
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int h;

	if (grid == NULL)
	{
		return (NULL);
	}

	h = height;

	do {
		free(grid[--h]);
	} while (h);

	free(grid);
}

