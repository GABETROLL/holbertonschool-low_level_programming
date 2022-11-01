#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an int inside an arrray
 * and returns the index if found.
 * If the int wasn't found, return -1
 *
 * @array: array of ints to search for an int
 *
 * @size: size of the array mentioned above
 * if size <= 0, this function just returns -1.
 *
 * @cmp: function that verifies the int being read
 * is the wanted int
 *
 * Return: index of int in 'array' if int was found
 * according to 'cmp', otherwise -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && size > 0 && cmp != NULL)
	{

		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}

