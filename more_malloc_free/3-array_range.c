#include <stdlib.h>

/**
 * array_range - Creates, and returns pointer to,
 * array with all integers between min and max,
 * including min and max, as long as min < max.
 *
 * If !(min < max), of if allocating the memory
 * for the result array fails,
 * this function returns NULL.
 *
 * @min: number to count up from
 * and first integer in the array
 * this function will return
 * (lower than max)
 *
 * @max: number to up to
 * and last integer in the array
 * this function will return
 * (bigger than min)
 *
 * Return: pointer to array range that includes min and max,
 * as long as min < max and allocating the range works.
 * Otherwise: NULL.
 */
int *array_range(int min, int max)
{
	int size;
	int i;
	int *result;

	if (min > max)
	{
		return (NULL);
	}

	size = (max - min + 1);
	/*
	 * The difference between max and min is always positive,
	 * since max > min.
	 *
	 * Their difference is also one less than the numbers
	 * in an array that includes min and max.
	 * (example: 5 - 2 = 3, but the range 2 - 5 contains 4 numbers:
	 * 2, 3, 4, 5)
	 */

	result = malloc(sizeof(int) * size);
	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		result[i] = min + i;
		/*
		 * adding min to numbers from 0 to size
		 * would result in numbers from min to max,
		 * which is exactly what we need.
		 */
	}

	return (result);
}

