#include <stdlib.h>

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

