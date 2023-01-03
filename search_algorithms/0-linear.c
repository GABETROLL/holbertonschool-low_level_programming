#include "search_algos.h"

/**
 * linear_search - Returns the index of a value 'value'
 * in int array 'array' of size_t 'size'.
 *
 * If 'array' is NULL or if 'value' isn't present
 * in the array, this function returns -1.
 *
 * @array: pointer to first int in int array
 * @size: amount of ints in array
 * NOT MAKING IT THE CORRECT SIZE LEADS TO UNDEFINED
 * BEHAVIOUR
 *
 * @value: value being searched inside array
 *
 * Return: index of value if it's present in array,
 * otherwise: NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (!array)
		return (-1);

	for (; index < size; index++)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return ((int)index);
	}

	return (-1);
}

