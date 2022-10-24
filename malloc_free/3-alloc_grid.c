#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	int **p;
	int width_index;
	int *current_array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	p = malloc(sizeof(int *) * width);

	for (width_index = 0; width_index < width; width_index++)
	{
		int index;

		current_array = malloc(sizeof(int) * height);

		for (index = 0; index < height; index++)
		{
			current_array[index] = 0;
		}
		p[width_index] = current_array;
	}

	return (p);
}

