#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - Excecutes function 'action'
 * on each int in the 'array' array.
 * @array: array of ints
 * @size: size of array
 * @action: function to feed each in into
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}

