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
	 * Look at this range:
	 * 2, 3, 4, 5
	 *
	 * Notice something?
	 * The difference of the max and min parameters in the range above
	 * is 3, but the amount of ints in it is 4.
	 *
	 * This means that if we include 'min' and 'max' in the array,
	 * the array's size is 'max' and 'min''s difference plus one.
	 *
	 * Their difference is also always positive, since max > min.
	 */

	result = malloc(sizeof(int) * size);
	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		result[i] = min + i;
	}
	/*
	 * adding numbers from min to max in our array
	 * that's in the heap
	*/

	return (result);
}

