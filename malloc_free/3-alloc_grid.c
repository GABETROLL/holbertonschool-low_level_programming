#include <stdlib.h>

/**
 * alloc_grid - Creates 2d array.
 *
 * Creates an array of pointers to an array of integers,
 * then returns the pointer to the array of pointers.
 *
 * If any malloc call goes wrong,
 * free all allocated memory then return NULL.
 *
 * @width: amount of ints per 'inner' array
 * @height: amount of int array pointers per main array
 *
 * Return: pointer to matrix if all mallocs succeded,
 * otherwise NULL.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int h;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		return (NULL);
	}

	for (h = 0; h < height; h++)
	{
		int w;

		grid[h] = malloc(sizeof(int) * width);

		if (grid[h] == NULL)
		{
			while (h >= 0)
			{
				free(grid[h]);
				h--;
			}
			free(grid);

			return (NULL);
		}

		for (w = 0; w < width; w++)
		{
			grid[h][w] = 0;
		}
	}

	return (grid);
}

